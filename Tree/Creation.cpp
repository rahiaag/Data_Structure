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
    node *n;         // creating a node pointer
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
        cout << root->data << " ";
        preOrder(root->left);
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
        cout << root->data << " ";
        inOrder(root->right);
    }
}

node *search(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    else if (key < root->data)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
}

// Checking if the given tree is BST or NOT

int isBST(node *root)
{ // Only Check when Calling Inorder Traversal
    static node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

node *searchIter(node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return NULL;
}

int main()
{
    /*
    // Constructing the root node
    node *p;
    p = new node;
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    node *p1;
    p1 = new node;
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    node *p2;
    p2 = new node;
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */

    // preorder traversal

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

    inOrder(p);
    cout << endl;

    // printf("%d", isBST(p));
    if (isBST(p))
    {
        cout << "This is a bst" << endl;
    }
    else
    {
        cout << "This is not a bst" << endl;
    }

    node *n = search(p, 10);
    if (n != NULL)
    {
        cout << "Found:" << n->data << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    node *n = searchIter(p, 6);
    if (n != NULL)
    {
        printf("Found: %d", n->data);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}