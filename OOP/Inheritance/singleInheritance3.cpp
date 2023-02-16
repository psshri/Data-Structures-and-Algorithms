#include<bits/stdc++.h>
using namespace std;

class A {
    protected:
        int a;
    
    public:
        void set_a(int x) {
            a = x;
        }
        void disp_a() {
            cout<<"Value of a : "<<a<<endl;
        }
};

class B: public A {
    int b, p;

    public:
        void set_b(int x, int y) {
            set_a(x);
            b = y;
        }
        void disp_b() {
            disp_a();
            cout<<"Value of b : "<<b<<endl;
        }
        void cal_prod() {
            p = a*b;
            cout<<"Product of "<<a<<" and "<<b<<" is : "<<p<<endl;
        }
};

int main() {
    B _b;
    _b.set_b(4,5);
    _b.cal_prod();
}