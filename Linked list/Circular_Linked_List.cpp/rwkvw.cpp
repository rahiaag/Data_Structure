// Circular linked list

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};


/*
Case 1:- Inserting at head in circular linked list
*/

node *InsertAtHead(node *head, int data)
{
    node *ptr = new node;
    ptr->data = data;
    node *p = head;

    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

/*
  Case 2:- Inserting in between in circular linked list
*/

node *InsertInBetween(node *head, int data, int index)
{
    node *ptr = new node;
    ptr->data = data;
    node *p = head;

    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}


/*
 Case 3:- Inserting at the end of circular linked list
*/

node *InsertAtEnd(node *head, int data)
{
    node *ptr = new node;
    ptr->data = data;

    node *p = head;
    node *q = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    ptr->next = head;
    p->next = ptr;

    return head;
}


/*
Case 4:- Insert after an Index
*/
node *InsertAfterNode(node *head, int data, node *prevNode)
{
    node *ptr = new node;
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}



/*
Case 1:Deleting the First element in Circular Linked List
*/

node *DeleteAtFirst(node *head)
{
    node *p=head;
    while (p->next!=head)
    {
        p=p->next;
    }
    node *q=head;
    head=head->next;
    p->next=head;

    free (q);
    return head;
}

/*
Case 2:Deleting the element in between Circular Linked List
*/
node *DeleteInBetween (node *head,int index)
{
    node *p=head;
    node *q=head->next;
    
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;

}

/*
Case 3:Deleting the Last element in Circular Linked List
*/
node *DeleteAtEnd(node *head)
{
    node *p=head;
    node *q=head->next;

    while(q->next!=head)
    {
        p=p->next;
        q=q->next;
    }
    p->next=head;
    free(q);
    return head;       //ek par yaha return p put karna and then output guess karna
}

/*
Case 4:Deleting the given  Node in Circular Linked List
*/

node *DeleteByValue(node *head , node *ptr)
{
    node *p=head;

    while(p->next!=ptr)
    {
        p=p->next;
    }
    p->next=ptr->next;
    free(ptr);

    return head;

}


























int display(node *head)
{
    node *p = head;
    while (p->next != head)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << " ";
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *fourth = new node;

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head;

   // cout << "Circular Linked List Before Insertion :" << endl;
   cout << "Circular Linked List Before Deletion :" << endl;
    display(head);
    //head = InsertAtHead(head, 0);
    //head = InsertInBetween(head, 53, 2);
    //head = InsertAtEnd(head, 5);
    //head = InsertAfterNode(head, 34, second);


    //head=DeleteAtFirst(head);
    //head=DeleteInBetween(head,2);
    //head=DeleteAtEnd(head);
    head=DeleteByValue(head ,second);
    cout << endl;
   // cout << "Circular Linked List After Insertion :" << endl;
    cout << "Circular Linked List After Deletion :" << endl;
    display(head);
    return 0;
}
