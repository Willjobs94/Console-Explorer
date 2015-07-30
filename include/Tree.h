#ifndef TREE_H
#define TREE_H


class Tree
{
    public:
        Tree();
        virtual ~Tree();
        Node* getRoot();
		void setRoot(Node* root);
		void goOver(Nodo* nodo);

    private:
        Node* root;
};

#endif // TREE_H
