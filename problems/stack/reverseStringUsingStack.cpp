#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node* next;
};

node* top = NULL;

void push(char c){
    node* temp = new node();
    temp->data = c;
    temp->next = NULL;

    if(top == NULL){
        top = temp;
        return;
    }
    temp->next = top;
    top = temp;
    return;
}

bool isEmpty(){
    if(top == NULL){
        return true;
    }
    else return false;
}

void pop(){
    if(top !=NULL){
        node* temp = top;
        cout<<top->data;
        top = top->next;
        delete(temp);
        return;
    }
    return;
}

int main(){
    string s;
    cout<<"Enter a string: "<<endl;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        push(s[i]);
    }
    while(!isEmpty()){
        pop();
    }
    cout<<endl;
}    