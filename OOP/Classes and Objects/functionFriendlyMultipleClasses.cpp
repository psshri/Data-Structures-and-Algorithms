// C++ program to demonstrate how friend functions work as a bridge between the 
// classes 

#include<bits/stdc++.h>
using namespace std;

class abc;

class xyz {
    int x;

    public:
        void set_data(int a) {
            x = a;
        }

        friend void max(xyz, abc);
};

class abc {
    int y;

    public:
        void set_data(int a) {
            y = a;
        }
        
        friend void max(xyz, abc);
};

void max(xyz obj1, abc obj2) {
    if(obj1.x > obj2.y) {
        cout<<obj1.x<<endl;
    }
    else {
        cout<<obj2.y<<endl;
    }
}

int main() {
    abc obj1;
    obj1.set_data(10);
    xyz obj2;
    obj2.set_data(20);
    max(obj2, obj1);
}