#ifndef ChildrenList_H
#define ChildrenList_H
#include "Node.h"

class ChildrenList
{
    public:
        ChildrenList();
        virtual ~ChildrenList();

        void addChild(Node* node);
        void setFirstChild(Node* node);
        void setLastChild(Node* node);
        void setSize(int size);
        Node* getFirstChild();
        Node* getLastChild();
    private:
        int size;
        Node* firstChild;
        Node* lastChild;
};

#endif // ChildrenList_H
