// C++ program to demonstrate single inheritance

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public:
        vehicle() {
            cout<<"This is a vehicle "<<endl;
        }
};

class car: public vehicle {

};

int main() {
    car c; //creating the object of the child class will invoke the constructor
           //of the base class
}