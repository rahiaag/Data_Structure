#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *createNode(int data)
{
    struct node *n;  // creating a node pointer
    n = new node;    // Allocating memory in the heap
    n->data = data;  // Setting the data
    n->left = NULL;  // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n;        // Finally returning the created node
}

void preOrder(node *root)
{
    if (root != NULL)
    {
        preOrder(root->left);
        cout << root->data << " ";
        preOrder(root->right);
    }
}

void postOrder(node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        inOrder(root->right);
        cout << root->data << " ";
    }
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
    node *p = createNode(2);
    node *p1 = createNode(1);
    node *p2 = createNode(4);
    node *p3 = createNode(5);
    node *p4 = createNode(7);
    node *p5 = createNode(6);
    node *p6 = createNode(3);
    node *p7 = createNode(9);
    node *p8 = createNode(8);

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    p3->left = NULL;
    p3->right = p7;
    p4->left = p8;
    p4->right = NULL;
    p5->right = NULL;
    p5->left = NULL;
    p6->right = NULL;
    p6->left = NULL;
    p7->left = NULL;
    p7->right = NULL;
    p8->left = NULL;
    p8->right = NULL;

    preOrder(p);
    cout << endl;
    postOrder(p);
    cout << endl;
    inOrder(p);
    cout << endl;

    return 0;
}