#include "ChildrenList.h"

ChildrenList::ChildrenList() : _firstChild(0), _lastChild(0)
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
                _lastChild = _firstChild;
                _firstChild->SetNextSibling(child);
                _lastChild->SetNextSibling(_firstChild);
        return;
	}
		_lastChild -> SetNextSibling(child);
		_lastChild = child;
		_lastChild->SetNextSibling(_firstChild);

}

void ChildrenList::SetFirstChild(Node* node)
{
    _firstChild = node;
}

void ChildrenList::SetLastChild(Node* node)
{
    _lastChild = node;
}

void ChildrenList::SetSize(int size)
{
    _size = size;
}

Node* ChildrenList::GetFirstChild()
{
    return _firstChild;
}

Node* ChildrenList::GetLastChild()
{
    return _lastChild;
}
