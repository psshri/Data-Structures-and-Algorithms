// calculate modular exponentiation using recursion

#include<iostream>
using namespace std;

int modExp(int x, int n, int M) {
    if(n == 0) {
        return 1;
    }
    else if(n%2 == 0) {
        int y = modExp(x, n/2, M);
        return (y*y)%M;
    }
    else return (x%M *modExp(x, n-1, M))%M;
}

int main() {
    int x,n,M;
    cout<<"Enter x, n and M :";
    cin>>x>>n>>M;

    int ans = modExp(x, n, M);
    cout<<ans<<endl;
}