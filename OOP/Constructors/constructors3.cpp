// how constructors are different from a normal member function

#include<bits/stdc++.h>
using namespace std;

class A {
    private:
        int x;
    public:
        A(int a);
        void setx(int a);
        void getx();
};

A::A(int a) {
    x = a;
}

void A::setx(int a) {
    x = a;
}

void A::getx() {
    cout<<x<<endl;
}

int main() {
    A a(10);
    a.getx();
    a.setx(100);
    a.getx();
}