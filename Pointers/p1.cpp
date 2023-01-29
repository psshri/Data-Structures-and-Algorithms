#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout<<"a: "<<a<<endl;
    cout<<"p: "<<p<<endl;
    cout<<"&a: "<<&a<<endl;
    cout<<"*p: "<<*p<<endl;
    cout<<"&p: "<<&p<<endl;

    int b = 10;
    int *g = 6;  // this will throw error
    cout<<b<<endl;
    cout<<g<<endl;
}