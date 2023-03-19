// define member functions without arguments outside the class

#include<bits/stdc++.h>
using namespace std;

class person {
    int id;
    char name[100];

    public:
        void set_p();
        void display_p();
};

void person::set_p() {
    cout<<"Enter the id: ";
    cin>>id;
    fflush(stdin);
    cout<<"Enter the name: ";
    cin.get(name, 100);
}

void person::display_p() {
    cout<<endl<<id<<"\t"<<name;
}

class student: private person {
    char course[50];
    int fee;

    public:
        void set_s();
        void display_s();
};

void student::set_s() {
    set_p();
    cout<<"Enter the course name: ";
    fflush(stdin);
    cin.getline(course, 50);
    cout<<"Enter the course fee: ";
    cin>>fee;
}

void student::display_s() {
    display_p();
    cout<<"\t"<<course<<"\t"<<fee;
}

int main() {
    student s;
    s.set_s();
    s.display_s();
}