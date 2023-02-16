// C++ program to demonstrate multi level inheritance

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public:
        vehicle() {
            cout<<"This is a vehicle"<<endl;
        }
};

class fourWheeler: public vehicle {
    public:
        fourWheeler() {
            cout<<"This is a four wheeler"<<endl;
        }
};

class car: public fourWheeler {
    public:
        car() {
            cout<<"This is a car"<<endl;
        }
};

int main() {
    car obj;
}