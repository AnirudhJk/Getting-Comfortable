//Program to input temperature in celsius and convert it into Fahrenheit
//Library
#include<iostream>
using namespace std;
int main()
{
//Main program
float cel;
cout << "Please input temperature in Celsius"<<endl;
cin >> cel;
float a=cel*1.8, b=a + 32;
cout << "The temperature in Fahrenheit is "<<b<<" degrees"<<endl;
return 0;
}



