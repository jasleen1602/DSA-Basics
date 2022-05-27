//Postfix Evaluation
#include <iostream>
#include <cstring>
using namespace std;
#define size 100
class Stack
{
    char arr[size];
    int topptr;

public:
    Stack()
    {
        topptr = -1;
    }
    bool isEmpty()
    {
        return (this->topptr == -1);
    }
    char pop()
    {
        if (topptr == -1)
        {
            cout << "Stack Underflow!" << endl;
            return 0;
        }
        else
            return arr[topptr--];
    }
    void push(char a)
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
        }
    }
    char peek()
    {
        if (isEmpty())
            return -1;
        else
            return arr[topptr];
    }
};

int postfix_eval(string s)
{
    Stack output;
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
        {
            int a = output.pop();
            int b = output.pop();
            int res;
            switch (c)
            {
            case '+':
                res = b + a;
                break;
            case '-':
                res = b - a;
                break;
            case '*':
                res = b * a;
                break;
            case '/':
                res = b / a;
                break;
            case '^':
                res = b ^ a;
                break;
            }
            output.push(res);
        }
        else if (c <= '9' && c >= '0')
        {
            output.push(c - '0');
        }
    }
    return output.pop();
}

int main()
{
    string s;
    cout << "Enter the Postfix expression below: ";
    cin >> s;
    cout << endl
         << "Postfix evaluation: " << postfix_eval(s);
    return 0;
}