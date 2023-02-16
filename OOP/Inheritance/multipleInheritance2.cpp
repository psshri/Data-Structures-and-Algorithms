// C++ program to demonstrate multiple inheritance

#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
        int a;
    public:
        void set_a() {
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
        }
        void disp_a() {
            cout<<"Value of a: "<<a<<endl;
        }
};

class B: public A {
    protected:
        int b;
    public:
        void set_b() {
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }
        void disp_b() {
            cout<<"Value of b: "<<b<<endl;
        }
};

class C: public B {
    int c, p;
    public:
        void set_c() {
            cout<<"Enter the value of c: "<<endl;
            cin>>c;
        }
        void disp_c() {
            cout<<"Value of c: "<<c<<endl;
        }
        void calProduct() {
            cout<<"Product of "<<a<<" ,"<<b<<" and "<<c<<" is: "<<a*b*c<<endl;
        }
};

int main() {
    C c;
    c.set_a();
    c.set_b();
    c.set_c();
    c.disp_a();
    c.disp_b();
    c.disp_c();
    c.calProduct();
}