#include "student1drawgraph.h"


const char* nameOfStudent1(){
    return  "Emil Kronholm";
}


void studentsDrawGraph(QPainter& painter,  const std::vector<Node>& graph)
{    
    for (const Node &node : graph)
    {
        for (Arc arc : node._outputs)
        {
            if (arc.m_isVisible)
            {
                painter.drawLine(node._point, graph[arc.m_ixDestination]._point);
            }
        }
    }
}



