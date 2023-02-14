// C++ program to access data members

#include<bits/stdc++.h>
using namespace std;

class geeks {
    public:
        string geekname;
        void printname() {
            cout<<"geekname is: "<<geekname;
        }
};

int main() {
    geeks obj;
    obj.geekname = "PSS";
    obj.printname();
}