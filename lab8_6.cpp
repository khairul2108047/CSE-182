//Program to check whether two matrices are equal or not.
#include<iostream>
using namespace std;
int main()
{
     int a[10][10], b[10][10], i, j, r1, c1, r2, c2, isequal = 1;
    cout << "Enter the rows and columns of the first matrix = ";
    cin >> r1>> c1;
        cout << "Enter the rows and columns of second matrix = ";
    cin >> r2 >> c2;
    if ( r1 == r2 && c1 == c2){
          cout << "Enter the elements of first matrix = \n";
    for ( i = 0; i < r1; i++){
        for ( j = 0; j < c1; j++){
            cin >> a[i][j];
        }
    }
    cout << "Enter the elements of the second matrix = \n";
    for ( i = 0; i < r2; i++){
        for (j = 0; j < c2; j++){
            cin >> b[i][j];
        }
    }
    for (i = 0; i < r1; i++){
        for (j = 0; j < c2; j++){
            if (a[i][j] == b[i][j]){
                isequal = 0;
                break;
            }
        }
    }
    }
    if (isequal == 0){
        cout << "Matrices are equal .";
    }else{
    cout << "Matrices are not equal.";
    }


    return 0;
}
