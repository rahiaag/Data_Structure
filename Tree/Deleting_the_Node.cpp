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

node *inOrderPredecessor(node* root){
    root = root->left;
    while (root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

node *deleteNode(node *root, int value){

    struct node* iPre;
    if (root == NULL){
        return NULL;
    }
    if (root->left==NULL&&root->right==NULL){
        free(root);
        return NULL;
    }

    //searching for the node to be deleted
    if (value < root->data){
        root-> left = deleteNode(root->left,value);
    }
    else if (value > root->data){
        root-> right = deleteNode(root->right,value);
    }
    //deletion strategy when the node is found
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left, iPre->data);
    }
    return root;
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


    inOrder(p);
    cout<<endl;
    deleteNode(p, 3);
    inOrder(p);
 
    return 0;
}