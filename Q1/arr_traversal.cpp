//Array Traversal
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Write the number of elements in the array: ";
    cin>>n;
    int arr[n];

    //Taking input of elements from the user
    cout<<"Add elements in the array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    //Printing array elements
    cout<<"Array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}

