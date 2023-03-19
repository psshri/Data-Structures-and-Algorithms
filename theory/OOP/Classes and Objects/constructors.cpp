// C++ program to demostrate constructors

#include<bits/stdc++.h>
using namespace std;

class geek {
    public:
        int id;

        geek() {
            cout<<"Default constructor called"<<endl;
            id = -1;
        }

        geek(int x) {
            cout<<"Parameterized constructor called"<<endl;
            id = x;
        }
};

int main() {
    geek obj1;
    cout<<"geek id is: "<<obj1.id<<endl;

    geek obj2(21);
    cout<<"geek id is: "<<obj2.id<<endl;
}