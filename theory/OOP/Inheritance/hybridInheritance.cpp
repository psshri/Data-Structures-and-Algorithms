// C++ program to demonstrate hybrid inheritance

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public:
        vehicle() {
            cout<<"This is vehicle"<<endl;
        }
};

class fare {
    public:
        fare() {
            cout<<"This is fare"<<endl;
        }
};

class car: public vehicle {
    public:
        car() {
            cout<<"This is car"<<endl;
        }
};

class bus: public vehicle, public fare {
    public:
        bus() {
            cout<<"This is bus"<<endl;
        }
};

int main() {
    bus obj1;
    car obj2;
}