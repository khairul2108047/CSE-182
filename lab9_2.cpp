//Program to demonstrate the use of function.
//No argument passed but a return value.
#include<iostream>
using namespace std;
int main()
{
    int s, addition();
    s = addition();
    cout << "Output: " << s; // Calling the function.
    return 0;
}
int addition()
{
    int num1, num2, sum; //variable declaration.
    cout << "Enter number 1 : "<< endl;
    cin >> num1;
    cout << "Enter number 2 : " << endl;
    cin >> num2;
    sum = num1 + num2;
    return sum;
}
