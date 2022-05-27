//Insertion in a double linked list
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

    //INSERTION
    int pos;
    struct Node *new_node;
    struct Node *ptr = head;
    cout << "Enter the element to be inserted: ";
    cin >> new_node->data;
    cout << "Enter the position at which the element is to be inserted: ";
    cin >> pos;
    if (pos == 1)
    {
        new_node->prev = NULL;
        new_node->next = head;
        head->prev = new_node;
        ptr = new_node;
    }
    else
    {
        for (int i = 0; i < pos - 2; i++)
            ptr = ptr->next;

        new_node->next = ptr->next;
        if (ptr->next != NULL)
            ptr->next->prev = new_node;

        ptr->next = new_node;
        new_node->prev = ptr;
        ptr = head;
    }

    //TRAVERSAL AFTER INSERTION
    cout << "Linked list after insertion: NULL <=> ";

    while (ptr != NULL)
    {
        cout << ptr->data << " <=> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}