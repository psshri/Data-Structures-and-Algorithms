// C++ program to demonstrate ambiguity in multipath inheritance
// avoiding ambiguity using the scope resolution operator

#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        int a;
};

class B: public A {
    public:
        int b;
};

class C: public A {
    public:
        int c;
};

class D: public C, public B {
    public:
        int d;
};

int main() {
    D obj;
    obj.B::a = 10;
    obj.C::a = 100;

    obj.b = 2;
    obj.c = 3;
    obj.d = 4;

    cout<<"a from Class B: "<<obj.B::a<<endl;
    cout<<"a from Class C: "<<obj.C::a<<endl;
    cout<<"b: "<<obj.b<<endl;
    cout<<"c: "<<obj.c<<endl;
    cout<<"d: "<<obj.d<<endl;
}