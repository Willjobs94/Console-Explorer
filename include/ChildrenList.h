#ifndef ChildrenList_H
#define ChildrenList_H
#include "Node.h"

class ChildrenList
{
    public:
        ChildrenList();
        virtual ~ChildrenList();

        void AddChild(Node* node);
        void SetFirstChild(Node* node);
        void SetLastChild(Node* node);
        void SetSize(int size);
        Node* GetFirstChild();
        Node* GettLastChild();
    private:
        int _size;
        Node* _firstChild;
        Node* _lastChild;
};

#endif // ChildrenList_H
