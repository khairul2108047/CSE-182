//Program to count the total number of duplicate elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n, i, j, count = 0;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the array = \n";
    for (i = 0; i < n; i ++)
      cin >> arr[i];
    for (i = 0; i < n; i++)
        for ( j = i + 1; j < n; j++)
        if( arr[i] == arr[j]){
        count++;
         break;
        }
    cout << "\nTotal number of duplicate elements = " << count;

return 0;

}
