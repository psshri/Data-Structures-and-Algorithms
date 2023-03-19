#include<bits/stdc++.h>
using namespace std;

void push(int arr[], int* top, int n, int a) {
    if(*top < n-1) {
        *top = *top + 1;
        arr[*top] = a;
    }
    else {
        cout<<"Stack is full, no space left for any element."<<endl;
    }
}

void printArr(int arr[], int* top, int n) {
    cout<<"The array is: ";
    for(int i=0; i<=*top; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Top(int arr[], int* top, int n) {
    if(*top != -1) {
        cout<<"The topmost element is: "<<arr[*top]<<endl;
    }
    else {
        cout<<"The stack is empty right now."<<endl;
    }
}

void pop(int arr[], int* top, int n) {
    if(*top != -1) {
        cout<<"Removing "<<arr[*top]<<" from the stack."<<endl;
        *top = *top - 1;
    }
    else {
        cout<<"Stack is empty, nothing to remove."<<endl;
    }
}

void isEmpty(int arr[], int* top, int n) {
    if(*top == -1) {
        cout<<"The stack is empty."<<endl;
    }
    else {
        cout<<"The stack is not empty."<<endl;
    }
}

int main() {
    int arr[10];
    int top = -1;
    push(arr, &top, 10, 1);
    printArr(arr, &top, 10);
    push(arr, &top, 10, 2);
    printArr(arr, &top, 10);
    push(arr, &top, 10, 3);
    printArr(arr, &top, 10);
    push(arr, &top, 10, 4);
    printArr(arr, &top, 10);
    push(arr, &top, 10, 5);
    printArr(arr, &top, 10);
    push(arr, &top, 10, 6);
    printArr(arr, &top, 10);
    Top(arr, &top, 10);
    printArr(arr, &top, 10);
    pop(arr, &top, 10);
    printArr(arr, &top, 10);
    Top(arr, &top, 10);
    printArr(arr, &top, 10);
    isEmpty(arr, &top, 10);
    printArr(arr, &top, 10);
}