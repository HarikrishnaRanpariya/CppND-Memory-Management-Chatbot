#include <iostream>
#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
     std::cout << "??GraphEdge Constructor" << std::endl;
    _id = id;
     std::cout << ">>GraphEdge Constructor" << std::endl;
}

void GraphEdge::SetChildNode(GraphNode *childNode)
{
  std::cout << "Enter GraphEdge::SetChildNode" << std::endl;
    _childNode = childNode;
}

void GraphEdge::SetParentNode(GraphNode *parentNode)
{
  std::cout << "Enter GraphEdge::SetParentNode" << std::endl;
    _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token)
{
  std::cout << "Enter GraphEdge::AddToken" << std::endl;
    _keywords.push_back(token);
}
