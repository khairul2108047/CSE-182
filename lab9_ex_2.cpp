//Program to add, subtract, multiply and divide two integers.
//No argument passed and return a value.
#include<iostream>
using namespace std;
int me();
int main()
{
    float result;
    result = me();
    cout << "Result : " << result;
    return 0;
}
int me()
    {
    int num1, num2;
    char c;
   cout << "Enter the numbers : ";
   cin >> num1 >> num2;
   cout << "what do you want to perform (+-*/) : ";
   cin >> c;
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
    return result;
}
