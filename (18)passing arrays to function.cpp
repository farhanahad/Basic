#include<iostream>
using namespace std;
void display(int num[],int size)
{
    for(int i=0;i<=4;i++)
        cout<<num[i]<<" ";
}
int main()
{
    int num[5]={10,20,30,40,50};
    display(num,5);
}
