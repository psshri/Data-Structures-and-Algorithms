// C++ program to demonstrate private access modifiers

#include<bits/stdc++.h>
using namespace std;

class circle {
    private:
        double radius;

    public:
        double compute_area(double r) {
            radius = r;
            double area = 3.14*radius*radius;
            cout<<"Radius is: "<<radius<<endl;
            return area;
        }
};

int main() {
    circle obj;
    // we can access the private data members of a class indirectly using the
    // public member functions of the class
    cout<<obj.compute_area(1.4)<<endl; 
}