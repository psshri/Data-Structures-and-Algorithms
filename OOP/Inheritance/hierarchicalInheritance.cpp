// C++ program to demonstrate hierarchical inheritance

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public:
        vehicle() {
            cout<<"This is a vehicle"<<endl;
        }
};

class car: public vehicle {
    public:
        car() {
            cout<<"This is a car"<<endl;
        }
};

class bus: public vehicle {
    public:
        bus() {
            cout<<"This is a bus"<<endl;
        }
};

int main() {
    bus obj;
    car obj2;
}