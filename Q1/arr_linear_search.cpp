//Linear search in an array
#include <iostream>
using namespace std;

int main()
{
    cout << "Output for linear search in an array" << endl;
    int n, key, i;
    cout << "Write the number of elements in the array: ";
    cin >> n;
    int arr[n];

    //Taking input of elements from the user
    cout << "Add elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Searching the element
    cout << "Enter the element you want to find: ";
    cin >> key;
    bool flag = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Element found at position " << i + 1;
    }
    else
        cout << "Element not present!" << endl;

    return 0;
}