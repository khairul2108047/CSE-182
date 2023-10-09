 //Program to add two numbers using pointers.
#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    int *p1, *p2;
    int sum;
    cout << "Enter the value of num1 = ";
    cin >> num1;
    cout << "Enter the value of num2 =";
    cin >> num2;
    p1 = &num1;
    p2 = &num2;
    sum = *p1 + *p2;
    cout << "Sum is = " << sum;
    return 0;
}
