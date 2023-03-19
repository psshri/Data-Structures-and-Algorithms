// typecasting and void pointers

#include<iostream>
using namespace std;
int main()
{
    int a1 = 1025;
    int *p1 = &a1;
    cout<<p1<<endl;
    cout<<*p1<<endl;

    cout<<*(p1+1)<<endl;

    char *c;
    c = (char*)p1;

    cout<<c<<endl;
    cout<<*(c+1)<<endl;

    void *p2;
    p2 = &a1;
    cout<<p2<<endl;
    // cout<<*p2<<endl;
}