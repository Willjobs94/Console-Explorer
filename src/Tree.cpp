#include "Tree.h"

Tree::Tree()
{
    //ctor
}

Tree::~Tree()
{
    //dtor
}
Node Tree::GetRoot()
{
    return _root;
}

void Tree::SetRoot(Node* root)
{
    _root = root;
}

void Tree::GoOver(Node* node)
{
    if(node)
    {
        vector<Node*> children = *node->GetChildren();
        if(node->GetNumberOfChildren() > 0)
        {

            cout << node->GetName() << " es padre de: ";

            for(int i = 0; i < node->GetNumberOfChildren(); i++)
            {
                if(i!=0){
                    cout << ", ";
                }
                cout << children[i]->GetName();

            }
        }
        else
        {
            cout << endl << node->GetName() << " no tiene hijos" << endl;
        }

           int size = node->GetChildren() -> size();

            for(int i = 0 ; i < size ;i++){
               GoOver(children[i]);
            }




    }else{
        cout << "Arbol esta vacio" << endl;
    }
}
