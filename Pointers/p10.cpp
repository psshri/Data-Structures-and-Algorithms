#include<iostream>
using namespace std;
void print(char *c) {
    int i = 0;
    while(i<20) {
        cout<<c[i];
        i++;
    }
    cout<<endl;
}
int main() {
    char c[20];
    c[0] = 'J';
    c[1] = 'O';
    c[2] = 'H';
    c[3] = 'N';
    print(c);
}