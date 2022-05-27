///Array implementation of queue
#include <iostream>
using namespace std;
#define size 5
class Queue
{
   int arr[size];
   int front;
   int rear;
 
public:
   Queue()
   {
       front = -1;
       rear = -1;
   }
   bool isEmpty()
   {
       if (this->front == -1 || this->front > this->rear)
           return true;
       else
           return false;
   }
   int dequeue()
   {
       if (isEmpty())
       {
           cout << "Queue is empty!" << endl;
           return 0;
       }
       else
       {
           int result = arr[front];
           front++;
           return result;
       }
   }
   void enqueue(int a)
   {
       if (rear >= size - 1)
       {
           cout << "Queue is full!" << endl;
           return;
       }
       else
       {
           if (front == -1)
               front = 0;
           rear++;
           arr[rear] = a;
           cout << a << " inserted in queue!" << endl;
       }
   }
   int peek()
   {
       if (isEmpty())
           return -1;
       else
           return arr[front];
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
   cout << s.dequeue() << " Removed from queue!" << endl;
   while (!s.isEmpty())
   {
       cout << s.peek() << " ";
       s.dequeue();
   }
   return 0;
}
