//Program to add, subtract, multiply and divide two integers.
//Argument passed but no return value.
#include<iostream>
using namespace std;
void me(int num1, int num2, char c);
int main()
{
    int num1, num2;
    char c;
    cout << "Enter the numbers : ";
    cin >> num1 >> num2;
    cout << "what do you want to perform (+-*/) : ";
    cin >> c;
    me(num1, num2,c);
}
void me(int num1, int num2, char c)
{
   float result;
    if (c == '+'){
    result = num1 + num2;
    }
    else if(c == '-'){
        result = num1 - num2;
    }
    else if(c == '*'){
        result = num1 * num2;
    }
    else if (c == '/'){
      result = (float)num1 / num2;
    }
    cout << "Result = " << result;
}
