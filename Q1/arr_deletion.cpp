//Array Deletion
#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Write the number of elements in the array: ";
    cin >> n;
    int arr[n];

    //Taking input of elements from the user
    cout << "Add elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Deleting an element
    cout << "Enter the element you want to delete: ";
    cin >> key;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = true;
            int j = i;
            while (j != n - 1)
            {
                arr[j] = arr[j + 1];
                j++;
            }
        }
    }
    if (flag)
    {
        n--;
        cout << "Element deleted! New ";
    }
    else
        cout << "Element not present!" << endl;
    //Printing array elements
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}