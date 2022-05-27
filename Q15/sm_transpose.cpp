//Transposing a sparse matrix
#include <iostream>
using namespace std;

int main()
{
    int m, n, i, j, count;
    cout << "Write the number of rows and columns in the array: ";
    cin >> m >> n;
    int arr[m][n];
    int result[count][3];

    //Taking input of elements of sparse array from the user
    cout << "Add elements in the sparse array: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> arr[i][j];

    //Printing array elements
    cout << "Condensed Array: " << endl;
    cout << "R"
         << " "
         << "C"
         << " "
         << "V" << endl;
    count = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (arr[i][j] != 0)
            {
                result[count][1] = i;
                result[count][2] = j;
                result[count][3] = arr[i][j];
                cout << result[count][1] << " " << result[count][2] << " " << result[count][3] << endl;
                count++;
            }

    cout << "Transpose of the Array: " << endl;
    cout << "R"
         << " "
         << "C"
         << " "
         << "V" << endl;
    count = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (arr[i][j] != 0)
            {
                result[count][1] = j;
                result[count][2] = i;
                result[count][3] = arr[i][j];
                cout << result[count][1] << " " << result[count][2] << " " << result[count][3] << endl;
                count++;
            }
    return 0;
}

// 1 0 0 4 0 3 0 6 0 0 7 1