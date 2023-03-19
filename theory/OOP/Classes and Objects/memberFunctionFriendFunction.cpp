// C++ program to create a member function of another class as friend function
// we always have to define both the classes before the function definition

#include<bits/stdc++.h>
using namespace std;

class base;

class anotherClass {
    public:
        void memberFunction(base obj);
};

class base {
    private:
        int private_variable;
    protected:
        int protected_variable;
    public:
        base() {
            private_variable = 10;
            protected_variable = 100;
        }

        friend void anotherClass::memberFunction(base obj);
};

void anotherClass::memberFunction(base obj) {
    cout<<"private_variable: "<<obj.private_variable<<endl;
    cout<<"protected_variable: "<<obj.protected_variable<<endl;
}

int main() {
    base obj1;
    anotherClass obj2;
    obj2.memberFunction(obj1);
}