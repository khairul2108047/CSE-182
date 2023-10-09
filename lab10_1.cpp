//Program to demonstrate the working of pointers.
#include<iostream>
using namespace std;
int main()
{
      int * pc, c;
      c = 22;
      cout << "Address of c : " << &c << endl;
      cout << " Value of c : " << c << endl;
      pc = &c;
      cout << "Address of pointer : " << pc << endl;
      cout << "Content of pointer  pc : " << *pc << endl;
      c = 11;
      cout << "Address of pointer : " << pc << endl;
      cout << "Content of pointer pc : " << *pc << endl;
      return 0;
}
