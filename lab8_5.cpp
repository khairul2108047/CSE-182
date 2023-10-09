//Program to perform scalar matrix multiplication.
#include<iostream>
using namespace std;
int main()
{
    int a[10][10], multi[10][10], i, j, r, c, n;
    cout << "Enter the rows and columns of the matrix = \n";
    cin >> r >> c;
    cout << "Enter the elements of the matrix = \n";
    for ( i = 0; i < r; i++){
        for ( j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter the multiplying number = ";
    cin >> n;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            multi[i][j] = n * a[i][j];
        }
    }
    cout << "The multiplied matrix is = \n";
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cout << multi[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
