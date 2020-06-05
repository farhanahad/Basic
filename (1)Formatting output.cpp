#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two numbers:";
    cin>>num1>>num2;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(10);
    float sum=num1+num2;
    cout<<setw(10)<<"Sum is "<<sum<<endl;
    cout<<noshowpoint;
    float sub=num1-num2;
    cout<<"Sub is "<<sub<<endl;
    float mul=num1*num2;
    cout<<"Multiplication is "<<mul<<endl;
}
