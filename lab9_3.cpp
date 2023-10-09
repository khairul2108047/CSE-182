//Program to demonstrate the use of function.
//Argument passed but no return value.
#include<iostream>
using namespace std;
void me(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    cout << "Output :"<< sum;
}
 int main()
 {
     int a, b;
     cout << "Enter a and b:" << endl;
     cin >> a >> b;
     me(a, b);
     return 0;
 }
