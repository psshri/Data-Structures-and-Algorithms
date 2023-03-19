// C++ programs to demostrate destructors

#include<bits/stdc++.h>
using namespace std;

class geek {
    public:
        int id;

        ~geek() {
            cout<<"destructor called for id: "<<id<<endl;
        }
};

int main() {
    geek obj1;
    obj1.id = 7;
    int i=0;
    while(i<5) {
        geek obj2;
        obj2.id = i;
        i++;
    }
}