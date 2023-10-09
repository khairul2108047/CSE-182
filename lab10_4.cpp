//Program to change the value of a constant integer using pointers.
#include<iostream>
using namespace std;
int main()
{
    int a = 2, *p;
    cout << "The value of a before change = " << a << endl;
    p = &a;
    cout << "Enter the value of p = ";
    cin >> *p;
    cout << "The value of a after change = " << a;
    return 0;
}
