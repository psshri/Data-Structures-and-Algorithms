// pointers as function arguments - call by reference: video 5/17
#include<iostream>
using namespace std;


// when we copy value of one variable to another variable, then such a function
// call is also called as call by value
void increment(int a)
{
    a = a+1;
    cout<<"address of a in increment: "<<&a<<endl;
}

// a function call in which instead of passing the value of a variable, we pass
// address of the variable, so that we have a reference to the variable so that
// can dereference it and perform some operation is called call by reference 
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