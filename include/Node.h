#ifndef NODE_H
#define NODE_H
#include <string>




class Node
{
    public:
        Node(std::string name);
        Node(std::string name, Node* father, int depth, int numberOfChildren, Node* nextSibling);
        virtual ~Node();

        //vector<Node*>* getChildren();
		std::string getName();
		void setName(std::string name);
		void setFather(Node* father);
		void setDepth(int depth);
		int getDepth();
		void add(Node* child);
		void setNumberOfChildren(int number);
		int getNumberOfChildren();
		Node* getFather();
		void setNextSibling(Node* node);
		Node* getNextSibling();
		ChildrenList* getChildren();
		void setChildren(ChildrenList* ChildrenList);
    private:
        std::string name;
        Node* father;
		//vector<Node*> *children;
		int depth;
		int numberOfChildren;
		std::string type; //dir or file

		//as a list item
        Node* nextSibling;

        //children
        ChildrenList* childrenList;
};

#endif // NODE_H
