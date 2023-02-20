#include<bits/stdc++.h>
using namespace std;

class A {
    private:
        int a=1;
    public:
        void func();
        void printit() {
            cout<<a<<endl;
            cout<<b<<endl;
        }
};

void A::func() {
    a = 10;
    int b=100;
}


int main() {
    A obj;
    obj.func();
    obj.printit();
}