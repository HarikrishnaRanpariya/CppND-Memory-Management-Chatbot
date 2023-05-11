#include <iostream>
#include "graphedge.h"
#include "graphnode.h"

GraphNode::GraphNode(int id)
{
   std::cout << "??GraphNode Constructor" << std::endl;
   _id = id;
   std::cout << ">>GraphNode Constructor" << std::endl;
}

GraphNode::~GraphNode()
{
    //// STUDENT CODE
    ////
    std::cout << "##GraphNode Destructor" << _chatBot<< std::endl;

    std::cout << "**GraphNode Destructor" << std::endl;
    ////
    //// EOF STUDENT CODE
}

void GraphNode::AddToken(std::string token)
{
  std::cout << "Enter GraphNode::AddToken" << std::endl;
    _answers.push_back(token);
}

void GraphNode::AddEdgeToParentNode(GraphEdge *edge)
{
  std::cout << "Enter GraphNode::AddEdgeToParentNode" << std::endl;
    _parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(GraphEdge *edge)
{
  std::cout << "Enter GraphNode::AddEdgeToChildNode" << std::endl;
    _childEdges.push_back(edge);
}

//// STUDENT CODE
////
void GraphNode::MoveChatbotHere(ChatBot *chatbot)
{
  std::cout << "Enter GraphNode::MoveChatbotHere" << std::endl;
    _chatBot = chatbot;
    _chatBot->SetCurrentNode(this);
  std::cout << "!!Set _chatBot MoveChatbotHere" << _chatBot<< std::endl;
}

void GraphNode::MoveChatbotToNewNode(GraphNode *newNode)
{
    std::cout << "Enter GraphNode::MoveChatbotToNewNode" << std::endl;
    newNode->MoveChatbotHere(_chatBot);
    _chatBot = nullptr; // invalidate pointer at source
    std::cout << "$$MOve _chatBot MoveChatbotHere" << _chatBot<< std::endl;

}
////
//// EOF STUDENT CODE

GraphEdge *GraphNode::GetChildEdgeAtIndex(int index)
{
    //// STUDENT CODE
    ////
    std::cout << "Enter *GraphNode::GetChildEdgeAtIndex" << std::endl;
    return _childEdges[index];

    ////
    //// EOF STUDENT CODE
}