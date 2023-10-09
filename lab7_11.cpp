//Program to insert an element into an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i, element;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the array = \n";
    for ( i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the element to insert = ";
    cin >> element;
    arr[i] = element;
    cout << "Array after the new element insert =\n ";
    for ( i = 0; i <= n; i++)
        cout << arr[i] << "  ";
    return 0;
}
