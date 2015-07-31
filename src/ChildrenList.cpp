#include "ChildrenList.h"

ChildrenList::ChildrenList()
{
    firstChild = NULL;
    lastChild = NULL;
}

ChildrenList::~ChildrenList()
{
    //dtor
}
void ChildrenList::addChild(Node* child)
{
     if(firstChild == NULL){
		firstChild = child;
		lastChild = firstChild;
		firstChild->setNextSibling(child);
		lastChild->setNextSibling(firstChild);

	}else{
		lastChild -> setNextSibling(child);
		lastChild = child;
		lastChild->setNextSibling(firstChild);
	}
}

void ChildrenList::setFirstChild(Node* node)
{
    firstChild = node;
}

void ChildrenList::setLastChild(Node* node)
{
    lastChild = node;
}

void ChildrenList::setSize(int size)
{
    this->size = size;
}

Node* ChildrenList::getFirstChild()
{
    return firstChild;
}

Node* ChildrenList::getLastChild()
{
    return lastChild;
}
