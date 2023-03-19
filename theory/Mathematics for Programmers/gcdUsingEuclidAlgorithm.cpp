// find out GCD of two integers using Euclid's Algorithm

#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else return gcd(b, a%b);
}

int main() {
    int a, b;
    cout<<"Enter two integers: ";
    cin>>a>>b;

    int dividend, divisor, remainder;
    dividend = a;
    divisor = b;

    while(divisor != 0) {
        remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;
    }
    cout<<dividend<<endl;

    cout<<gcd(a,b)<<endl;
}