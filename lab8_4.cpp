//Program to subtract two matrix.
#include<iostream>
using namespace std;
int main()
{
    int a[10] [10], b[10] [10], sub[10][10], i, j, r, c;
    cout << "Enter the number of rows and columns : ";
    cin >> r >> c;
    cout << "Enter the elements of the first matrix = \n";

    for ( i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix =\n";
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
        cout << "Subtract of the two matrix is :\n";
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
