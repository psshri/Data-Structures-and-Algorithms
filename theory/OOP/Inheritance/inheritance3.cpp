// define member funcions with arguments outside class

#include<bits/stdc++.h>
using namespace std;

class person {
    int id;
    string name;

    public:
        void set_p(int id, string name);
        void display_p();
};

void person::set_p(int id1, string name1) {
    id = id;
    name = name1;
}

void person::display_p() {
    cout<<"id is: "<<id<<endl;
    cout<<"name is: "<<name<<endl;
}

class student: private person {
    string course;
    int fee;
    
    public:
        void set_s(int fee1, string course1, int id, string name);
        void display_s();
};

void student::set_s(int fee1, string course1, int id, string name) {
    set_p(fee, name);
    course = course1;
    fee = fee1;
}

void student::display_s() {
    display_p();
    cout<<"\t"<<course<<"\t"<<fee;
}

int main() {
    student s;
    s.set_s(1001, "RAM", 5, "B.Tech");
    s.display_s();
}