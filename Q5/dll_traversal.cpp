//Traversal of a double linked list
#include <iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
int main()
{
    int a, b, c;
    //Creating nodes
    struct Node *head = new struct Node;
    struct Node *second = new struct Node;
    struct Node *third = new struct Node;

    cout << "Enter three values to be stored in the linked list: ";
    cin >> a >> b >> c;

    //Creation of linked list
    head->prev = NULL;
    head->data = a;
    head->next = second;
    second->prev = head;
    second->data = b;
    second->next = third;
    third->prev = second;
    third->data = c;
    third->next = NULL;

    //TRAVERSAL
    cout << "Linked list: ";
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ->  ";
        ptr = ptr->next;
    }
    cout << "NULL";
}