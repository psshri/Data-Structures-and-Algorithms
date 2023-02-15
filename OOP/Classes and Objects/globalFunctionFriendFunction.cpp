// C++ program to create a global function as a friend function  of some class

#include<bits/stdc++.h>
using namespace std;

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
        friend void friendFunction(base obj);
};

void friendFunction(base obj) {
    cout<<"private_variable: "<<obj.private_variable<<endl;
    cout<<"protected_variable: "<<obj.protected_variable<<endl;
}

int main() {
    base obj;
    friendFunction(obj);
}