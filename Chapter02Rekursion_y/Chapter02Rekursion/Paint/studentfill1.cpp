
#include "studentfill1.h"
#include <QDebug>

#include <algorithm>

const char* nameOfStudent1(){
    return "Emil Kronholm";
}

void recursiveFull(int r, int k, IDrawingParent *pImage, QColor colorOld, QColor colorNew)
{
    // behöver ej implementeras
}

void recursiveFill(int r, int k, IDrawingParent *pImage, QColor colorOld, QColor colorNew)
{
    //Bryter mot regeln om identiska anrop, men det är okej då inga upprepningar sker då setPixeln
    //aktivt ändrar färgerna och därför så får vi ingen exponentiell ökning i programtid
    //Det händer att samma pixel kollas flera gånger, men varje pixel kan maximalt köra recursiveFill en gång.
    //Därför bedömer jag att detta är den enklaste och snyggaste lösningen!

    //Blir evighetsloop annars
    if (colorOld == colorNew) return;

    if ((*pImage).isInside(r, k) && (*pImage).pixel(r, k) == colorOld)
    {
        (*pImage).setPixel(r, k, colorNew);
        recursiveFill(r + 1, k, pImage, colorOld, colorNew);
        //Bottom
        recursiveFill(r - 1, k, pImage, colorOld, colorNew);
        //Right
        recursiveFill(r, k + 1, pImage, colorOld, colorNew);
        //Left
        recursiveFill(r, k - 1, pImage, colorOld, colorNew);
    }
}
