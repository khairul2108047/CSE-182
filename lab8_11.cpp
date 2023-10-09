//Program to check whether a matrix is sparse or not.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], i, j, r, c, zeros = 0;
    cout << "Enter the rows and columns of the matrix = ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix : \n";
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    for (i = 0; i < r; i++){
        for ( j = 0; j < c; j++){
            if (a[i][j] == 0){
                zeros ++;
            }
        }
    }
        if ( zeros > (i * j) / 2){
            cout << "The matrix is  sparse matrix.";
        }
     else {
        cout << "The matrix is not sparse matrix.";
     }
     return 0;
}
