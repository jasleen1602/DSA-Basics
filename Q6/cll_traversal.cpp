//Traversal of a circular linked list
#include <iostream>
using namespace std;

struct Node
{
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
    head->data = a;
    head->next = second;
    second->data = b;
    second->next = third;
    third->data = c;
    third->next = head;

    struct Node *ptr = head;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
}