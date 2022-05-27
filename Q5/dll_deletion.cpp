//Deletion in a double linked list
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
    int a, b, c, d;
    //Creating nodes
    struct Node *head = new struct Node;
    struct Node *second = new struct Node;
    struct Node *third = new struct Node;
    struct Node *fourth = new struct Node;
    cout << "Enter four values to be stored in the linked list: ";
    cin >> a >> b >> c >> d;

    //Creation of linked list
    head->prev = NULL;
    head->data = a;
    head->next = second;
    second->prev = head;
    second->data = b;
    second->next = third;
    third->prev = second;
    third->data = c;
    third->next = fourth;
    fourth->data = d;
    fourth->prev = third;
    fourth->next = NULL;

    //DELETION
    struct Node *p = head;

    cout << "Enter the value to be deleted: ";
    int key;
    cin >> key;
    bool flag = true;

    while (p->data != key)
    {
        if (p->next == NULL)
        {
            cout << "Element not present!" << endl;
            flag = false;
            break;
        }
        p = p->next;
    }

    if (flag)
    {

        // head node
        if (head == p)
            head = p->next;

        // middle node
        if (p->next != NULL)
            p->next->prev = p->prev;

        // end node
        if (p->prev != NULL)
        {
            p->prev->next = p->next;
        }
        delete p;
    }
    //TRAVERSAL
    cout << "Linked list: ";
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "NULL";
}
