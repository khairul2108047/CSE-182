//Program to find the diameter, circumference and area of a circle using function.
#include<iostream>
 using namespace std;
 float diameter(float b);
 float circumference(float c);
 float area(float a);
 int main()
 {
     float r, D, C, A;
     cout << "Enter the value of radius of a circle = " << endl;
     cin >> r;
     D = diameter(r);
     C = circumference(r);
     A = area(r);
     cout << "Diameter of the circle " << D << " units."<< endl;
     cout << "Circumference of the circle " << C << " units." << endl;
     cout << "Area of the circle " << A << " sq.units" << endl;
     return 0;
 }
   float diameter( float b)
  {
      return (2 * b);
  }
  float circumference( float c)
  {
      float pi = 3.1416;
      return ( 2 * pi * c);
  }
 float area(float a)
 {
     float pi = 3.1416;
     return (pi * a * a);
 }

