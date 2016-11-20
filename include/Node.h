#ifndef NODE_H
#define NODE_H
#include <string>

class ChildrenList;

class Node
{
    public:
        Node(std::string name);
        Node(std::string name, Node* father, int depth, int numberOfChildren, Node* nextSibling);
        virtual ~Node();

        //vector<Node*>* getChildren();
		std::string GetName();
		void SetName(std::string name);
		void SetFather(Node* father);
		void SetDepth(int depth);
		int GetDepth();
		void Add(Node* child);
		void SetNumberOfChildren(int number);
		int GetNumberOfChildren();
		Node* GetFather();
		void SetNextSibling(Node* node);
		Node* GetNextSibling();
		ChildrenList* GetChildrenList();
		void SetChildren(ChildrenList* ChildrenList);
    private:
        std::string _name;
        Node* _father;
		int _depth;
		int _numberOfChildren;
		std::string _type;
        Node* _nextSibling;
        ChildrenList* _childrenList;
};
#endif // NODE_H
