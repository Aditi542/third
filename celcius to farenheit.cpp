#include<iostream>// header file
using namespace std;
int main()
{
    float farenheit,celcius; //Declartion
    cout<<"Enter temperature in celcius : ";
    cin>>celcius;
    farenheit=(celcius*9.0)/5.0+32;
    cout<<"The temperature in farenheit : "<<farenheit<<endl; //output
    return 0;
}
