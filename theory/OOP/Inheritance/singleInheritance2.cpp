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
            cout<<"Value of a : "<<a<<endl;
        }
};

class B: public A {
    int b, p;

    public:
        void set_b() {
            set_a();
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }
        void disp_b() {
            disp_a();
            cout<<"Value of b : "<<b<<endl;
        }

        void cal_product() {
            p = a*b;
            cout<<"Product of "<<a<<" and "<<b<<" is : "<<p<<endl;
        }
};

int main() {
    B _b;
    _b.set_b();
    _b.disp_b();
    _b.cal_product();
}