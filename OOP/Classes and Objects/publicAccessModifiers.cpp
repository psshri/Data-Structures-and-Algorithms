// an example to demonstrate public access specifiers

#include<bits/stdc++.h>
using namespace std;

class circle {
    public:
        double radius;

        double compute_area() {
            return 3.14*radius*radius;
        }
};

int main() {
    circle obj;
    obj.radius = 4.4;
    cout<<"Radius is : "<<obj.radius<<endl;
    cout<<"Area is : "<<obj.compute_area()<<endl;
}