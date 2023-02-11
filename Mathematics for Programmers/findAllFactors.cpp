// find all factors of a number

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    for(int i=1; i<=sqrt(n); i++) {
        if(n%i == 0) {
            cout<<i<<" ";
            if(i!=sqrt(n)) {
                cout<<n/i<<" ";
            }
        }
    }
}