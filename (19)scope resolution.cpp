#include<iostream>
using namespace std;
int x=10;//global variable
int main()
{
    int x=22;//local variable
    cout<<x<<endl;
    cout<<::x<<endl;
    :: x=88;
    cout<<::x;
}

