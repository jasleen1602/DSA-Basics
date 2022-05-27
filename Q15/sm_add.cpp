//Adding two sparse matrices in condensed form
#include <iostream>
using namespace std;
int sum[100][3];
int count = 0;

void insert(int r, int c, int v){
    sum[count][0]=r;
    sum[count][1]=c;
    sum[count][2]=v;
    count++;
}

int main()
{
    int m, n, i, j, count1=0, count2=0;
    cout << "Write the number of rows and columns in the array: ";
    cin >> m >> n;
    int arr1[m][n], arr2[m][n];
    int result1[count1][3], result2[count2][3];

    //Taking input of elements of sparse arrays from the user
    cout << "Add elements in the first sparse array: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> arr1[i][j];

    cout << endl << "Add elements in the second sparse array: ";
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> arr2[i][j];

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            if (arr1[i][j] != 0)
            {
                result1[count1][1] = i;
                result1[count1][2] = j;
                result1[count1][3] = arr1[i][j];
                
                count1++;
            }
            if (arr2[i][j] != 0)
            {
                result2[count2][1] = i;
                result2[count2][2] = j;
                result2[count2][3] = arr2[i][j];
                count2++;
            }
        }
    }
    int pos1=0, pos2=0;
    while(pos1<count1&&pos2<count2){
        if(result1[pos1][0]<result2[pos2][0]||(result1[pos1][0]==result2[pos2][0]&&result1[pos1][1]>result2[pos2][1])){
            insert(result2[pos2][0], result2[pos2][1], result2[pos2][2]);
            pos2++;
        }
        else if(result2[pos2][0]<result1[pos1][0]||(result2[pos2][0]==result1[pos1][0]&&result2[pos2][1]>result1[pos1][1])){
            insert(result1[pos1][0], result1[pos1][1], result1[pos1][2]);
            pos1++;
        }
        else //add the values as row and col is same
        {
            int sum = result1[pos1][2]+result2[pos2][2];
            if(sum!=0)
                insert(result1[pos1][0], result1[pos1][1], sum);
            pos1++; pos2++;
        }
    }
    while(pos1<count1){
        insert(result1[pos1][0], result1[pos1][1], result1[pos1][2]);
        pos1++;
    }
    while(pos2<count2){
        insert(result2[pos2][0], result2[pos2][1], result2[pos2][2]);
        pos2++;
    }

    //Printing sum 
    cout << "Sum Array: " << endl;
    cout << "R"
         << " "
         << "C"
         << " "
         << "V" << endl;
    for(i=0; i<count; i++){
        for(j=0; j<3; j++)
            cout<<sum[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
0 1 2 0 3 0 -4 0 2 0 0 -1
0 -1 0 4 0 2 0 6 -3 0 1 2

0 0 0 0 5 8 0 0 0 0 3 0 0 6 0 0
1 2 0 0 0 3 0 4 0 0 5 6 7 0 4 0
