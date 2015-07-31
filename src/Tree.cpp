#include "Tree.h"
#include <stdlib.h>

Tree::Tree() : root(NULL)
{
    //ctor
}

Tree::~Tree()
{
    //dtor
}
Node* Tree::getRoot()
{
    return root;
}

void Tree::setRoot(Node* root)
{
    this->root = root;
}

void Tree::goOver(Node* node)
{
    if(node)
    {
        vector<Node*> children = *node->getChildren();
        if(node->getNumberOfChildren() > 0)
        {

            cout << node->getName() << " es padre de: ";

            for(int i = 0; i < node->getNumberOfChildren(); i++)
            {
                if(i!=0){
                    cout << ", ";
                }
                cout << children[i]->getName();

            }
        }
        else
        {
            cout << endl << node->getName() << " no tiene hijos" << endl;
        }

           int size = node->getChildren() -> size();

            for(int i = 0 ; i < size ;i++){
               goOver(children[i]);
            }




    }
    else
    {
        cout << "Arbol esta vacio" << endl;
    }
}
