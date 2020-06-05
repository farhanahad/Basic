#include<iostream>
using namespace std;
void addition(int a,int b)
{
    int sum=a+b;
    cout<<sum<<endl;
}
void subtraction(int a,int b)
{
    int sub=a-b;
    cout<<sub<<endl;
}
void multiplication(int a,int b)
{
    int mul=a*b;
    cout<<mul<<endl;
}
int main()
{
    addition(10,20);
    addition(10,10);
    addition(10,30);
    subtraction(44,22);
    multiplication(5,5);
}
