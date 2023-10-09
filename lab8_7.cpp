//Program to find the sum of the main diagonal elements of a matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], i, j, r, c, sum = 0;
    cout << "Enter the rows and columns of the matrix = ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix = \n";
    for ( i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> a[i][j];
    if ( i == j){
     sum+= a[i][j];
    }
        }
    }
    cout << "sum of main diagonal elements of the matrix is = " << sum;
    return 0;
}
