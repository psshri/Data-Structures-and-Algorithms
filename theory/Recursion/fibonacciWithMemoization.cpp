// fibonacci sequence with memoization

#include<iostream>
using namespace std;

int arr[10000];

int fibo(int n) {
    if(n<2) {
        return n;
    }
    else if(arr[n] != -1) {
        return arr[n];
    }
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];
}

int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    for(int i=0; i<10000; i++) {
        arr[i] = -1;
    }
    arr[0] = 0;
    arr[1] = 1;

    int ans = fibo(n);
    cout<<ans<<endl;
}