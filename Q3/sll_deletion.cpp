//Deletion in a single linked listx
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
    struct Node *q = head;
    cout << "Enter the value to be deleted: ";
    cin >> i;
    bool flag = false;
    //Deletion of a node with the given value
    if (head->data == i)
    {
        flag = true;
        ptr = head->next;
        delete head;
    }
    else
    {
        while (ptr != NULL)
        {
            if (i == ptr->data)
            {
                struct Node *temp = ptr;
                q->next = ptr->next;
                delete temp;
                flag = true;
                break;
            }
            q = ptr;
            ptr = ptr->next;
        }
        ptr = head;
    }
    if (flag)
        cout << "Node deleted!" << endl;
    else
        cout << "Element not found for deletion!" << endl;

    while (ptr != NULL)
    {
        cout << ptr->data << " ->  ";
        ptr = ptr->next;
    }
    cout << "NULL";
}