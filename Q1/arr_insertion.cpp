//Array Insertion
#include <iostream>
using namespace std;

int main()
{
    int n, k, pos;
    cout << "Write the number of elements in the array: ";
    cin >> n;
    int arr[n];

    //Taking input of elements from the user
    cout << "Add elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Insertion of an element
    cout << "Add the element to be inserted :";
    cin >> k;
    cout << "Write the index where you want to insert the element: ";
    cin >> pos;

    n += 1;
    for (int i = n - 1; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = k;

    //Printing array elements
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}