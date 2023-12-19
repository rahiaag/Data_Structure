#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *left;
    node *right;
};

node *create(int data)
{
    node *p=new node;
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}

