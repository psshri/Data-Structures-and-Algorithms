// C++ program to implement hybrid inheritance

#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
        int a;
    public:
        void get_a() {
            cout<<"Enter the value of a: ";
            cin>>a;
        }
};

class C {
    protected:
        int c;
    public:
        void get_c() {
            cout<<"Enter the value of c: ";
            cin>>c;
        }
};

class B: public A {
    protected:
        int b;
    public:
        void get_b() {
            cout<<"Enter the value of b: ";
            cin>>b;
        }
};

class D: public B, public C {
    public:
        void mul() {
            get_a();
            get_b();
            get_c();
            cout<<"Product of "<<a<<", "<<b<<" and "<<c<<" is: "<<a*b*c<<endl;
        }
};

int main() {
    D obj;
    obj.mul();
}