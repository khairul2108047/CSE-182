//Program to get the largest element of an array using the function.
#include<iostream>
using namespace std;
int findlarge(int [], int);
int main()
{
    int arr[100], n, i, large;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the element of the array : " << endl;
    for ( i = 0; i < n; i++){
    cin >> arr[i];
    }
    large = findlarge(arr, n);
    cout << "The largest element of the array = " << large;
    return 0;
}
int findlarge(int arr[], int n)
{
    int i, m;
     m = arr[0];
    for (i = 0; i < n; i++){
        if ( arr[0] < arr[i]){
            m = arr[i];
        }
    }
    return (m);

}
