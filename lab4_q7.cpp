//write a program to calculate area of a equilateral triangle
//Library
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//Main programme
float a,b,d;
cout <<"Please enter the length of side of the equilateral triangle"<<endl;
cin >>a;
//All the calculations
b=pow(3,0.5);
float c=b/4;
d=pow(a,2);
float e=c*d;
cout <<"The area of the equilateral trangle is "<<e<<endl;
return 0;
}
