//Traversal of a single linked list
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
    third->next = NULL;

    //Reversal of the linked list

    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    cout << "Linked list after reversal: ";
    while (prev != NULL)
    {
        cout << prev->data << " ->  ";
        prev = prev->next;
    }
    cout << "NULL";
}