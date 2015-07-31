#ifndef TREE_H
#define TREE_H


class Tree
{
    public:
        Tree();
        virtual ~Tree();
        Node* GetRoot();
		void SetRoot(Node* root);
		void GoOver(Nodo* nodo);

    private:
        Node* _root;
};

#endif // TREE_H
