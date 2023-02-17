// C++ program to demonstrate how to define a constructor outside a class

#include<bits/stdc++.h>
using namespace std;

class student {
    private:
        int roll;
        string name;
    public:
        student();
        void display();
};

student::student() {
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the roll number: ";
    cin>>roll;
}

void student::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"Roll: "<<roll<<endl;
}

int main() {
    student s;
    s.display();
}