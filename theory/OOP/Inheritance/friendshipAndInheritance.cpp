// C++ program to demonstrate the relation between inheritance and friendship

#include<bits/stdc++.h>
using namespace std;

class A {
    private:
        int x;
    public:
        A() {
            x = 0;
        }
        friend void show();
};

class B: public A {
    private:
        int y;
    public:
        B() {
            y = 0;
        }
};

void show() {
    B b;
    cout<<"default value of A::x = "<<b.x<<endl;
    // cout<<"default value of B::y = "<<b.y<<endl;
}

int main() {
    show();
}