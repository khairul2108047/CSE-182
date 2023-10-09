//Program to count the total number of even and odd elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i, even = 0, odd = 0;
    cout << "Enter the size of array = \n";
    cin >> n;
    cout << "Enter the elements of array :\n";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            even++;
            else
            odd++;

    cout << "\nTotal even numbers = "<< even;
    cout << "\nTotal odd numbers = "<< odd;
    return 0;
}
