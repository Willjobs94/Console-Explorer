#include "Node.h"

Node::~Node()
{
    //dtor
}
Node::Node(std::string name)
{
    //this -> children = new vector<Node*>;
    ChildrenList = NULL;
	this->name = name;
}

Node::Node(std::string name, Node* father, int depth, int numberOfChildren)
{
    this -> children = new vector<Node*>;
    this->name = name;
    this->father = father;
    this->depth = depth;
    this->numberOfChildren = numberOfChildren;
}

vector Node::getChildren()
{
    return children;
}

string Node::getName()
{
    return name;
}

void Node::setName(string name)
{
    this->name = name;
}

void Node::setFather(Node* father)
{
    this->father = father;
}

void Node::setDepth(int depth)
{
    this->depth = depth;
}

int Node::getDepth()
{
    return depth;
}

void Node::add(Node* child)
{
    hijo->setProfundidad(profundidad + 1);
    hijos -> push_back(hijo);
}

void Node::setNumberOfChildren(int number)
{
    numberOfChildren = number;
}

int Node::getNumberOfChildren()
{
    return numberOfChildren;
}

Node* Node::getFather()
{
    return father;
}

void Node::setNextSibling(Node* node)
{
    this->nextSibling = node;
}

Node* Node::getNextSibling()
{
    return nextSibling;
}

ChildrenList* Node::getChildren()
{
    return childrenList;
}

void Node::setChildren(ChildrenList* childrenList)
{
    this->childrenList = childrenList;
}
