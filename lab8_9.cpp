// Program to find the lower triangular matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], i ,j , r, c, islower;
    cout << "Enter the rows and columns of the matrix = ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix =\n";
    for ( i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    islower = 1;
    for ( i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if ( j > i && a[i][j] != 0){
                islower = 0;
            }
        }
    }
    if ( islower == 1){
        cout << "The matrix is lower triangular matrix.";
    }
    else {
        cout << "The matrix is not lower triangular matrix.";
    }
    return 0;
}
