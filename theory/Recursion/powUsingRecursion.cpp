// implement pow(x,n) using recursion

#include<iostream>
using namespace std;

int power(int n, int x) {
    if(x==0) {
        return 1;
    }
    else return n*power(n, x-1);
}

int smartPower(int n, int x) {
    if(x == 0) {
        return 1;
    }
    else if(x%2 == 0) {
        int y = smartPower(n, x/2);
        return y*y;
    }
    else return n*smartPower(n, x-1);
}

int main() {
    int n,x;
    cout<<"Enter an integer and its exponent: ";
    cin>>n>>x;

    int ans = power(n, x);
    cout<<ans<<endl;
    int ans1 = smartPower(n, x);
    cout<<ans1<<endl;
    
}