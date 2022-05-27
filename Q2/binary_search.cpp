//Binary search in an array
#include <iostream>
using namespace std;

int main()
{
    cout << "Output for binary search in an array" << endl;
    int n, key, i = 0, temp;
    cout << "Write the number of elements in the array: ";
    cin >> n;
    int arr[n];
    int l = 0, h = n - 1, mid;
    //Taking input of elements from the user
    cout << "Add elements in the array in ascending order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Searching the element
    cout << "Enter the element you want to find: ";
    cin >> key;
    bool flag = false;
    while (l <= h)
    {
        mid = l + (h - l) / 2;
        if (arr[mid] == key)
        {
            flag = true;
            i = mid;
            break;
        }
        else if (key < arr[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }

    if (flag)
    {
        cout << "Element found at position " << i + 1;
    }
    else
        cout << "Element not present!" << endl;

    return 0;
}