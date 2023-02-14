// C++ program to demostrate function decalaration outside class

#include<bits/stdc++.h>
using namespace std;

class geek {
    public:
        string geekname;
        int id;

        void printname(); // this function is not defined inside class definition

        void printid() { // this function is defined inside class definition
            cout<<"geek id is: "<<id<<endl;
        }
};

void geek::printname() {
    cout<<"geekname is: "<<geekname<<endl;
}

int main() {
    geek obj;
    obj.geekname = "PSS";
    obj.id = 14;

    obj.printname();
    obj.printid();
}