// find the Nth number in fibonacci sequence

#include<iostream>
using namespace std;

int fibo(int n) {
    cout<<"func call for "<<n<<endl;
    if(n == 1) {
        return 0;
    }
    else if(n == 2) {
        return 1;
    }
    else return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    int ans = fibo(n);
    cout<<ans<<endl;
}