// pointers as function arguments - call by reference
#include<iostream>
using namespace std;

void increment(int a)
{
    a = a+1;
    cout<<"address of a in increment: "<<&a<<endl;
}

void func2(int* a)
{
    *a = *a + 1;
    cout<<"address of a in func2: "<<&a<<endl;
}

int main()
{
    int a = 10;
    cout<<"address of a in main: "<<&a<<endl;
    increment(a);
    func2(&a);
    cout<<a<<endl;
}