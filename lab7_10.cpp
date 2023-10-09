//Program to find the reverse of an array.
#include<iostream>
using namespace std;
int main()
{

    int arr[100], n, i;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the array =\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The reverse array of the given array = \n";
    for ( i = n-1; i >= 0; i--)
    cout << arr[i] << " ";
    return 0;
}
