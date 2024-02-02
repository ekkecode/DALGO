#include "node.h"
#include <stdio.h>
#include <algorithm>
#include <deque>
#include <QDebug>

#include "students.h"

const char* nameOfStudent1()
{
    return "Emil Kronholm";
}

/**************************************************************************
 * Trädklättring.
 *
 *
 **************************************************************************/

Node* testTree1()
{
    Node *pNode4 = new Node (4, nullptr, nullptr);
    Node *pNode5 = new Node (5, nullptr, nullptr);
    Node *pNode6 = new Node (6, nullptr, nullptr);

    Node *pNode2 = new Node (2, pNode4, nullptr);
    Node *pNode3 = new Node (3, pNode5, pNode6);

    Node *pNode1 = new Node (1 , pNode2, pNode3);

    return pNode1;
}

void flashPreOrder(Node *pTree)
{
  if (pTree == nullptr) return;

  pTree->flash();
  flashPreOrder(pTree->m_pLeft);
  flashPreOrder(pTree->m_pRight);
}

void flashInOrder(Node *pTree)
{
  if (pTree == nullptr) return;

  flashInOrder(pTree->m_pLeft);
  pTree->flash();
  flashInOrder(pTree->m_pRight);
}

void flashPostOrder(Node *pTree)
{
  if (pTree == nullptr) return;

  flashPostOrder(pTree->m_pLeft);
  flashPostOrder(pTree->m_pRight);
  pTree->flash();
}

// Nedanstående funktion skall inte vara rekursiv.
// implementera den med hjälp av en FIFO-kö.
// Så här kan du deklarera fifo-kön:
// std::deque<Node*> que;
// så här stoppar du in ett värde i kön
// que.push_back( nodepekare );
// så här läser du det värde som ligger främst
// Node *p = que.front();
// så här avlägsnar du det främsta värdet från kön
// que.pop_front();

void flashNodesAtIncreasingDepth(Node *pTree)
{
    std::deque<Node*> queue;
    queue.push_back(pTree);

    while (queue.size() > 0)
    {
        Node* tree = queue.front();
        tree->flash();
        queue.pop_front();

        if (tree->m_pLeft != nullptr)
            queue.push_back(tree->m_pLeft);
        if (tree->m_pRight != nullptr)
            queue.push_back(tree->m_pRight);
    }
}
// Nedanstående funktioner bör vara rekursiva.
// De kan då implementeras med några få raders kod.

int numberOfNodes(Node *pTree)
{
    if (pTree == nullptr) return 0;
    return 1 + numberOfNodes(pTree->m_pLeft) + numberOfNodes(pTree->m_pRight);
}

int height(Node *pTree)
{
    pTree->flash();

    if (pTree == nullptr) return -1;

    const int heightLeft = height(pTree->m_pLeft);
    const int heightRight = height(pTree->m_pRight);

    return 1 + ((heightLeft > heightRight) ? heightLeft : heightRight);
}

void testfunktion1(Node *pTree){
    // frivilligt att skriva kod här
    qDebug() << "testfunktion1";
}

