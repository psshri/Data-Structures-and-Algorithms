// Pointers and Arrays: video 6/17
#include<iostream>
using namespace std;
int main() {
    int a = 10;
    int *p = &a;
    cout<<"*p: "<<*p<<endl;
    cout<<"p: "<<p<<endl;
    p = p + 1;
    cout<<"p+1: "<<p<<endl;
    cout<<"*(p+1): "<<*(p+1)<<endl;

    int arr[4] = {0,1,2,3};

    int *p1 = &arr[0];
    cout<<"\n*p1: "<<*p1<<endl;
    cout<<"p1: "<<p1<<endl;
    p1 = p1 + 1;
    cout<<"p1+1: "<<p1<<endl;
    cout<<"*(p1+1): "<<*p1<<endl;

    cout<<endl;

    cout<<arr<<" "<<&arr[0]<<endl;
    cout<<arr+1<<" "<<&arr[1]<<endl;
    cout<<arr[0]<<" "<<*arr<<endl;
    cout<<arr[1]<<" "<<*(arr+1)<<endl;

    // using pointer arithmetic in case of arrays makes sense because we know 
    // that elements in arrays are arranged adjacently
}
