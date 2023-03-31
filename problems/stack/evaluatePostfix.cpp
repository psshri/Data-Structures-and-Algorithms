// C++ program to evaluate a postfix expression

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        string data;
        node* next = NULL;
        
        node(){
            data = "";
            next = NULL;
        }
        node(string a){
            this->data = a;
            this->next = NULL;
        }
};

class stack1{
    private:
        node* head;
    public:
        void push(string a);
        string pop();
        // void printStack();
};

// void stack1::printStack(){
//     node* temp = head;
//     cout<<"The stack is: ";
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
//     return;
// }

string stack1::pop(){
    node* temp = head;
    head = head->next;
    string a = temp->data;
    delete(temp);
    return a;
}

void stack1::push(string a){
    node* temp = new node(a);
    temp->next = head;
    head = temp;
    return;
}

bool isOperand(char a){
    if(a == '+' || a == '-' || a == '*' || a == '/'){
        return true;
    }
    else return false;
}

int eval(int n2, char a, int n1){
    int ans = 0;
    if(a == '+'){
        ans = n2 + n1;
    }
    else if(a == '-'){
        ans = n2 - n1;
    }
    else if(a == '/'){
        ans = n2 / n1;
    }
    else{
        ans = n2 * n1;
    }
    return ans;
}

int evaluate(string s){
    stack1 st;
    int ans = 0;
    for(int i=0; i<s.length(); i++){
        char a = s[i];
        if(isOperand(a)){
            int n1 = stoi(st.pop());
            int n2 = stoi(st.pop());
            // cout<<n1<<" "<<n2<<" "<<a<<endl;
            ans = eval(n2, a, n1);
            string c = to_string(ans);
            st.push(c);
        }
        else{
            string c3(1, a);
            st.push(c3);
        }
        // st.printStack();
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter a postfix expression: "<<endl;
    cin>>s;
    int ans = evaluate(s);
    cout<<"The value of "<<s<<" is: "<<ans<<endl;
}