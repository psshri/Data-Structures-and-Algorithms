// check whether a number is a prime or not
#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n) {
    if(n == 1) {
        return 0;
    }
    int counter = 0;
    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            counter = 1;
            break;
        }
    }
    if(counter == 0) {
        return 1;
    }
    else return 0;
}

int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;

    bool ans = isPrime(n);

    if(ans == 1) {
        cout<<n<<" is a Prime number."<<endl;
    }
    else {
        cout<<n<<" is not a Prime number."<<endl;
    }
}