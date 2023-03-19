#include<algorithm>
#include<string>
#include<cmath>
#include<iostream>
using namespace std;

int toDecimal(string binary) {
    int ans = 0;
    int len = binary.length();
    for(int i=0; i<len; i++) {
        char c1 = binary[i];
        int c2 = int(c1 - '0');
        ans += c2*pow(2,len-1-i);
    }
    return ans;
}

int main() {
    string binary;
    cout<<"Enter a binary number: ";
    cin>>binary;

    int ans = toDecimal(binary);
    cout<<"Decimal representation of "<<binary<<" is: "<<ans<<endl;
}