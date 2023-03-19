// C++ program to demonstrate the order of constructor calls in multiple 
// inheritance
// the destructors are called in reverse order of constructors

#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        A() {
            cout<<"A constructor"<<endl;
        }
};

class B {
    public:
        B() {
            cout<<"B constructor"<<endl;
        }
};

class C: public B, public A {
    public:
        C() {
            cout<<"C constructor"<<endl;
        }
};

int main() {
    C obj;
}