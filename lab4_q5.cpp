//Write a C++ program to enter two angles of a triangle and get the third angle
//Library
#include<iostream>
using namespace std;
int main()
// Main program
{
float a,b;
cout << "Please input first angle of the triangle"<<endl;
cin >>a;
cout << "Please input second angle"<<endl;
cin >>b;
float c=a+b, d=180-c;
cout <<"The third angle of the triangle is "<<d<<" degrees"<<endl;
return 0;
}

