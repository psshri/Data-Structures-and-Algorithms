// C++ program to demonstrate ambiguity in multi path inheritance
// avoiding ambiguity using the virtual base class

#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        int a;
};

class B: virtual public A {
    public:
        int b;
};

class C: virtual public A {
    public:
        int c;
};

class D: public B, public C {
    public:
        int d;
};

int main() {
    D obj;
    obj.a = 10;
    obj.a = 100;

    obj.b = 1;
    obj.c = 2;
    obj.d = 3;

    cout<<"a: "<<obj.a<<endl;
    cout<<"b: "<<obj.b<<endl;
    cout<<"c: "<<obj.c<<endl;
    cout<<"d: "<<obj.d<<endl;
}