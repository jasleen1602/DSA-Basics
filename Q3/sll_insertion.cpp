//Insertion in a single linked list
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int a, b, c, d, i = 0;
    //Creating nodes
    struct Node *head = new struct Node;
    struct Node *second = new struct Node;
    struct Node *third = new struct Node;
    struct Node *fourth = new struct Node;

    cout << "Enter four values to be stored in the linked list: ";
    cin >> a >> b >> c >> d;

    //Creation of linked list
    head->data = a;
    head->next = second;
    second->data = b;
    second->next = third;
    third->data = c;
    third->next = fourth;
    fourth->data = d;
    fourth->next = NULL;

    struct Node *ptr = head;
    struct Node *new_node = new struct Node;
    cout << "Enter the value to be inserted: ";
    cin >> new_node->data;
    cout << "Enter the node before which you want to add: ";
    int pos;
    cin >> pos;
    //INSERTION BEFORE A GIVEN NODE
    while (i != pos - 2)
    {
        ptr = ptr->next;
        i++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ->  ";
        ptr = ptr->next;
    }
    cout << "NULL";
}