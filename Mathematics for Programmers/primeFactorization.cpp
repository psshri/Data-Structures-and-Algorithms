// find all the prime factors of a number

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            int ct = 0;
            while(n%i == 0) {
                n = n/i;
                ct++;
            }
            cout<<i<<" "<<ct<<endl;
        }
    }
    if(n != 1) {
        cout<<n<<" "<<1<<endl;
    }
}