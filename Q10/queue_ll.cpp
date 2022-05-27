//Linked List implementation of queue
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
class Queue
{
    struct Node *head = NULL;
    struct Node *rear = head;
    struct Node *front = head;

public:
    Queue() {}
    bool isEmpty()
    {
        return (front == NULL && rear == NULL);
    }
    int dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue underflow!";
            return -1;
        }
        else if (front->next == NULL)
        {
            delete front;
            front = NULL;
            rear = NULL;
            return -1;
        }
        int x = head->data;
        front = front->next;
        delete head;
        head = front;
        return x;
    }
    void enqueue(int a)
    {
        //insertion at tail
        struct Node *new_node = new struct Node;
        new_node->data = a;
        new_node->next = NULL;
        if (rear == NULL)
        {
            front = rear = head = new_node;
            cout << a << " pushed in queue!" << endl;
            return;
        }
        rear->next = new_node;
        rear = new_node;
        cout << a << " pushed in queue!" << endl;
    }
    int peek()
    {
        return front->data;
    }
};

int main()
{
    Queue s;
    cout << s.isEmpty() << endl;
    s.enqueue(4);
    s.enqueue(5);
    s.enqueue(6);
    s.enqueue(2);
    cout << s.dequeue() << " removed from the queue!" << endl;
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.dequeue();
    }
    return 0;
}