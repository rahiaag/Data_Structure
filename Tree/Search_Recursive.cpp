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
    node *n;  // creating a node pointer
    n =new node;    // Allocating memory in the heap
    n->data = data;  // Setting the data
    n->left = NULL;  // Setting the left and right children to NULL
    n->right = NULL; // Setting the left and right children to NULL
    return n;        // Finally returning the created node
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

node *search(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data==key)
    {
        return root;
    }
    else if ( root->data > key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

int main()
{

    // Constructing the root node - Using Function (Recommended)
     node *p = createNode(5);
     node *p1 = createNode(3);
     node *p2 = createNode(6);
     node *p3 = createNode(1);
     node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

    // Linking the root node with left and right children
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
 

    node *n = search(p, 3);
    if (n != NULL)
    {
        cout << "Found:" << n->data << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}