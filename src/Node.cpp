#include "Node.h"
using namespace std;
Node::~Node()
{
    //dtor
}
Node::Node(string name) : _childrenList(0), _name(name)
{

}

Node::Node(string name, Node* father, int depth, int numberOfChildren, Node* nextSibling) : _name(name), _father(father), _depth(depth), _numberOfChildren(numberOfChildren), _nextSibling(nextSibling)
{

}

vector Node::GetChildren()
{
    return _children;
}

string Node::GetName()
{
    return _name;
}

void Node::SetName(string name)
{
    _name = name;
}

void Node::SetFather(Node* father)
{
    _father = father;
}

void Node::SetDepth(int depth)
{
    _depth = depth;
}

int Node::GetDepth()
{
    return _depth;
}

void Node::Add(Node* child)
{
    hijo->setProfundidad(profundidad + 1);
    hijos -> push_back(hijo);
}

void Node::SetNumberOfChildren(int numberOfChildren)
{
    _numberOfChildren = numberOfChildren;
}

int Node::GetNumberOfChildren()
{
    return _numberOfChildren;
}

Node* Node::GetFather()
{
    return _father;
}

void Node::SetNextSibling(Node* node)
{
    _nextSibling = node;
}

Node* Node::GetNextSibling()
{
    return _nextSibling;
}

ChildrenList* Node::GetChildrenList()
{
    return _childrenList;
}

void Node::SetChildren(ChildrenList* childrenList)
{
    _childrenList = childrenList;
}
