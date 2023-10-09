//Program to check whether a matrix is an identity matrix or not.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], i, j, r, c, identity;
    cout << "Enter the rows and columns of the matrix = ";
    cin >> r >> c;
    cout << "Enter the elements of the matrix : \n";
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    identity = 1;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if (a[i][j] != 1 && a[j][i] != 0){
                identity = 0;
            }
        }
    }
    if (identity == 1){
        cout << "The matrix is identity matrix .";
    }else{
    cout << "The matrix is not identity matrix.";
    }
    return 0;
}

