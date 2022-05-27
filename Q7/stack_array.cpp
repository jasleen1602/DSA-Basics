///Array implementation of stack
#include <iostream>
using namespace std;
#define size 4
class Stack
{
    int arr[size];
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
            return arr[topptr--];
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
            arr[topptr] = a;
            cout << a << " pushed in stack!" << endl;
        }
    }
    int top()
    {
        if (isEmpty())
            return -1;
        else
            return arr[topptr];
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
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}