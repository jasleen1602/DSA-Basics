///Infix to postfix conversion
#include <iostream>
#include <cstring>
using namespace std;
#define size 100
int precedence(char);
class Stack
{
    char arr[size];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty()
    {
        return (this->top == -1);
    }
    char pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
            return 0;
        }
        else
            return arr[top--];
    }
    void push(char a)
    {
        if (top >= size - 1)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = a;
        }
    }
    char peek()
    {
        if (isEmpty())
            return -1;
        else
            return arr[top];
    }
};

int precedence(char op)
{
    int prec;
    switch (op)
    {
    case '+':
        prec = 1;
        break;
    case '-':
        prec = 1;
        break;
    case '*':
        prec = 2;
        break;
    case '/':
        prec = 2;
        break;
    case '^':
        prec = 3;
        break;
    default:
        prec = -1;
    }
    return prec;
}

string infix_to_postfix(string s)
{
    string result = "";
    Stack output;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            output.push('(');
        else if (s[i] == ')')
        {
            while (output.peek() != '(')
                result += output.pop();
            output.pop();
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
        {
            while (!output.isEmpty() && precedence(s[i]) <= precedence(output.peek()))
                result += output.pop();

            output.push(s[i]);
        }
        else
            result += s[i];
    }
    while (!output.isEmpty())
    {
        result += output.pop();
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter the infix expression below: ";
    cin >> s;
    cout << endl
         << "Postfix expression: " << infix_to_postfix(s);
    return 0;
}