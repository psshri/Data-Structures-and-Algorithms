// simple C++ program to demonstrate inheritance

#include<bits/stdc++.h>
using namespace std;

class parent {
    public:
        int id_p;
};

class child: public parent {
    public:
        int id_c;
};

int main() {
    child obj1;

    obj1.id_c = 1;
    obj1.id_p = 2;
    cout<<"Child id is :"<<obj1.id_c<<endl;
    cout<<"Parent id is :"<<obj1.id_p<<endl;
}