//Program to find the second largest element in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n, i, j, temp;
    cout << "Enter the size of the array : " << endl;
    cin >> n;
    cout << "Enter the " << n << " elements in the array :" << endl;
    for (i = 0; i < n; i++)
        cin >> arr[i];
        for ( i = 0; i < n-1; i++){
            for ( j = 0; j < n-1; j++){
                if ( arr[j] > arr[j + 1]){
                    arr[j] = temp;
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    cout << "\nSecond largest element = " << arr[n - 2];
    return 0;
}
