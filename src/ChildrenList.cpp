#include "ChildrenList.h"

ChildrenList::ChildrenList() : _firstChild(NULL), _lastChild(NULL)
{
}

ChildrenList::~ChildrenList()
{
    //dtor
}
void ChildrenList::AddChild(Node* child)
{
     if(_firstChild){
		_firstChild = child;
		_lastChild = firstChild;
		_firstChild->SetNextSibling(child);
		_lastChild->SetNextSibling(firstChild);
        return;
	}
		_lastChild -> SetNextSibling(child);
		_lastChild = child;
		_lastChild->SetNextSibling(firstChild);

}

void ChildrenList::SetFirstChild(Node* node)
{
    _firstChild = node;
}

void ChildrenList::setLastChild(Node* node)
{
    _lastChild = node;
}

void ChildrenList::setSize(int size)
{
    _size = size;
}

Node* ChildrenList::getFirstChild()
{
    return _firstChild;
}

Node* ChildrenList::getLastChild()
{
    return _lastChild;
}
