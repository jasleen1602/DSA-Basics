//Sorting of an Array
#include <iostream>
using namespace std;

int main()
{
    int n, temp, min_index;
    cout << "Write the number of elements in the array: ";
    cin >> n;
    int arr[n];

    //Taking input of elements from the user
    cout << "Add elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    //Sorting of Array
    for (int i = 0; i < n; i++)
    {
        min_index = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[i])
                min_index = j;
        if (min_index != i)
        {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    //Printing array elements in ascending order
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}