//Linked List implementation of stack
#include <iostream>
using namespace std;
#define size 4
struct Node
{
    int data;
    struct Node *next;
};
class Stack
{
    struct Node *head = NULL;
    int topptr;

public:
    Stack()
    {
        topptr = -1;
    }
    bool isEmpty()
    {
        if (this->topptr == -1)
            return true;
        else
            return false;
    }
    int pop()
    {
        if (topptr == -1)
        {
            cout << "Stack Underflow!" << endl;
            return 0;
        }
        else
        {
            topptr--;
            struct Node *temp = head;
            int x = temp->data;
            head = head->next;
            delete temp;
            return x;
        }
    }
    void push(int a)
    {
        if (topptr >= size - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        else
        {
            topptr++;
            //insertion at head
            struct Node *new_node = new struct Node;
            new_node->data = a;
            new_node->next = head;
            head = new_node;
            cout << a << " pushed in stack!" << endl;
        }
    }
    int peek()
    {
        if (isEmpty())
            return -1;
        else
            return head->data;
    }
};

int main()
{
    Stack s;
    cout << s.isEmpty() << endl;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(2);
    cout << s.pop() << " popped out of the stack!" << endl;
    while (!s.isEmpty())
    {
        cout << s.peek() << " ";
        s.pop();
    }
    return 0;
}