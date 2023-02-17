// C++ program to demonstrate defining a constructor within the class

#include<bits/stdc++.h>
using namespace std;

class student {
    private:
        int roll;
        string name;
    public:
        student() {
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the roll number: ";
            cin>>roll;
        }
        void display() {
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<roll<<endl;
        }
};

int main() {
    student s;
}