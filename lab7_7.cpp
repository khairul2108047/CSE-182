//Program to print all unique elements in the array.
#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[100], n, i;
    cout << "Enter the size of the array = ";
    cin >> n;
    cout << "Enter the elements of the array = \n";
    for (i = 0; i < n; i ++){
      cin >> a[i];
    }
     cout << "\nUnique elements in the array = \n";
     sort( a, a+n);
      for (i=0; i<n; i++)
    if(a[i]==a[i+1])
    {
      continue;
    }
    else
    {
        cout<<a[i]<<" ";
    }
return 0;
}
