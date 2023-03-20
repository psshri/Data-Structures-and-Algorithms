#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    int j = s.length() - 1;
    for(int i=0; i<j; i++){
        char a = s[i];
        s[i] = s[j];
        s[j] = a;
        j--;
    }
    cout<<"Reversed string is: "<<s<<endl;
}