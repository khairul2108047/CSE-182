//Program to add, subtract, multiply and divide two integers.
//Argument passed and return a value.
#include<iostream>
using namespace std;
float me(float num1, float num2, char c);
int main()
{
   float a, b, result;
    char x;
    cout << "Enter the numbers:" << endl;
    cin >> a >> b;
    cout << "What do you want to perform (+-*/) :" << endl;
    cin >> x;
    result = me(a, b, x);
    cout << "Result = " << result;
    return 0;
}
float me(float num1, float num2, char c)
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
      result = num1 / num2;
    }
    return result;
}
