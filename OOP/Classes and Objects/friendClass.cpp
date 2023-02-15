// C++ program to demonstrate the functioning of a friend class

#include<bits/stdc++.h>
using namespace std;

class gfg {
    private:
        int private_variable;

    protected:
        int protected_variable;
    
    public:
        gfg() {
            private_variable = 10;
            protected_variable = 100;
        }
        friend class f;
};

class f {
    public:
        void display(gfg t) {
            cout<<"The value of private variable: "<<t.private_variable<<endl;
            cout<<"The value of protected variable: "<<t.protected_variable<<endl;
        }
};

int main() {
    gfg g;
    f fri;
    fri.display(g);
}