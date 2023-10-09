//Program to find the sum of two one-dimensional arrays using the function.
#include<iostream>
using namespace std;
void sumarray();
int main()
{
    sumarray();
    return 0;
}
void sumarray()
{
    int a[100], b[100], sum[100], n, i;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the first array : \n";
    for (i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter the elements of the second array : \n";
    for (i = 0; i < n; i++){
        cin >> b[i];
    }
    for (i = 0; i < n; i++){
        sum[i] = a[i] + b[i];
    }
    cout << "Sum of the two arrays = \n";
    for (i = 0; i < n; i++){
        cout << sum[i] << " ";
    }
}
