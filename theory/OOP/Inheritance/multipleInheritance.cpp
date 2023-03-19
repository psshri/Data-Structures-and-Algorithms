// C++ program to demonstrate multiple inheritance

#include<bits/stdc++.h>
using namespace std;

class vehicle {
    public:
        vehicle() {
            cout<<"This is a vehicle"<<endl;
        }
};

class fourWheeler {
    public:
        fourWheeler() {
            cout<<"This is a four wheeler"<<endl;
        }
};

class car: public vehicle, public fourWheeler {

};

int main() {
    car obj;
}