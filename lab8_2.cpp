#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int r, c, total_r, total_c, isupper;
    cout << "Enter the total number of row and column = ";
    cin >> total_r >> total_c;
    cout << "Enter the matrix elements :\n";
    for (r = 0; r < total_r; r++){
        for (c = 0; c < total_c; c++){
                cin >> arr[r][c];
            }
        }
        isupper = 1;
         for (r = 0; r < total_r; r++){
            for (c = 0; c < total_c; c++){
                if (c < r && arr[r][c] != 0){
                    isupper = 0;
                    }
              }
        }

    if ( isupper == 1){
        cout << "\nThe matrix is upper triangular matrix." << endl;
    }
    else{
        cout << "\n The matrix is not upper triangular matrix." << endl;
    }

    return 0;
}
