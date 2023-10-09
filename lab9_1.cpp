//Program to demonstrate the use of function.
//No argument passed and no return value.
#include<iostream>
using namespace std;

 void addition();
  int main()
  {
      addition(); //Calling the function here

    return 0;
  }
  void addition()
{
    int num1, num2, sum;   // Variable declaration.

    cout << "Enter number 1: " << endl;
    cin >> num1;
    cout << "Enter number 2: " << endl;
    cin >> num2;

    sum = num1 + num2;
    cout << "Output: " << sum;
}
