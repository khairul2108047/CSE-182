//Program to sort arrays using pointers and functions.
#include<iostream>
using namespace std;
void sortarr(int [], int);
int main()
{
    int arr[100], n, i;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the array :"<< endl;
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortarr(arr, n);
    return 0;
}
void sortarr(int *p, int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (*(p + j) >*(p + i)){
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    for (i = 0; i < n; ++i){
        cout << *(p + i) << " ";
    }
}
