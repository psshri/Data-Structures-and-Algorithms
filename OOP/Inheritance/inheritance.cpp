// simple example to demonstrate inheritance, define member function 
// w/o argument within the class

#include<bits/stdc++.h>
using namespace std;

class person {
    int id;
    char name[100];

    public:
        void set_p() {
            cout<<"Enter the id: ";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the name: ";
            cin.get(name, 100);
        }

        void display_p() {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
};

class student: private person {
    char course[50];
    int fee;

    public:
        void set_s() {
            set_p();
            cout<<"Enter the course name: ";
            fflush(stdin);
            cin.getline(course, 50);
            cout<<"Enter the cours fee: ";
            cin>>fee;
        }

        void display_s() {
            display_p();
            cout<<course<<"\t"<<fee<<endl;
        }
};

int main() {
    student s;
    s.set_s();
    s.display_s();
}