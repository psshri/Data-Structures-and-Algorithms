// pointer arithmetic

#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    //cout<<p<<endl;
    //cout<<p+1<<endl;
    int *q = p+1;
    //cout<<q-p<<endl;
    //cout<<sizeof(int)<<endl;

    char c = 'a';
    char *v = &c;
    cout<<v<<endl;
    //cout<<v+1<<endl;
    cout<<*v<<endl;
}