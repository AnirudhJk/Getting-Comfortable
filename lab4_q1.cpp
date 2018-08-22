//Write a C++ program for converting length in meter and kilometer
//Library
#include<iostream>
using namespace std;
int main()
{
//Input for taking data in centimeter
int centi;
cout <<"Please input data in centimeter"<<endl;
cin >> centi;
int met = centi/100;
double kilo = centi/100000;
cout <<"The length in metres is "<<met<<endl;
cout<<"The length in kilometres is "<<kilo<<endl;
return 0;
} 
