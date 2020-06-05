#include<iostream>
using namespace std;
void a(int x){
cout<<x<<endl;
}
void a(double x){
cout<<x<<endl;
}
int main()
{
    a(10);
    a(10.5);
}
