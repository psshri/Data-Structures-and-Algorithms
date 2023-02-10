// character arrays and pointers

#include<iostream>
using namespace std;
int main() {
    char c[4];
    c[0] = 'j';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    c[4] = '\0';
    
    char c1[] = "JOHN";
    char c2[5] = "JOHN";
    char c3[20]= "JOHN";

    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
}