//Insertion in a circular linked list
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
    fourth->next = head;

    struct Node *ptr = head;
    struct Node *new_node = new struct Node;
    cout << "Enter the value to be inserted: ";
    cin >> new_node->data;
    cout << "Enter the position at which the node is to be inserted: ";
    int pos;
    cin >> pos;

    //INSERTION AT THE GIVEN POSITION

    if (pos == 1)
    {
        new_node->next = head;
        while (ptr->next != head)
            ptr = ptr->next;
        ptr->next = new_node;
        head = new_node;
    }
    else
    {
        while (i != pos - 2)
        {
            ptr = ptr->next;
            i++;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }

    ptr = head;
    do
    {
        cout << ptr->data << " ->  ";
        ptr = ptr->next;
    } while (ptr != head);
}