#include<iostream>
using namespace std;

int main(){
int side1, side2, side3;
cout<<"Enter the value of sides\n";
cin>>side1>>side2>>side3;
if(side1==side2&&side2==side3)
cout<<"The triangle is equilateral triangle\n";
else if(side1==side2||side2==side3||side1==side3)
cout<<"The triangle is isoceles triangle\n";
else
cout<<"the triangle is scalene triangle";
return 0;
}