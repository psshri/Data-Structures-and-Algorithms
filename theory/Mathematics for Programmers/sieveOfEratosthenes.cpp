// find all prime numbers till n

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    int arr[n+1];
    for(int i=0; i<n+1; i++) {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;

    for(int i=2; i<=sqrt(n); i++) {
        if(arr[i] == 1) {
            for(int j=2; j*i<n+1; j++) {
                arr[i*j] = 0;
            }
        }
    }
    for(int i=0; i<n+1; i++) {
        if(arr[i] == 1) {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}