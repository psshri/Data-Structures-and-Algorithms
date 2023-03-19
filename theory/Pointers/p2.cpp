#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&a<<endl;
    *p = 12;
    cout<<a<<endl;
    cout<<*p<<endl;
}