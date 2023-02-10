// this program can only handle positive integers

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string toBinary(int n) {
    string ans;
    if(n==0) {
        ans = '0';
    }
    else {
        while(n!=1) {
            int a = n%2;
            n = n/2;
            string c = to_string(a);
            ans += c;
        }
        ans += '1';
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    string binary = toBinary(n);
    cout<<"Binary representation of "<<n<<" is: "<<binary<<endl;
}