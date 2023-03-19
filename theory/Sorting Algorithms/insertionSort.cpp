#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int arr[], int n) {
    for(int i=1; i<=n-1; i++) {
        int hole = i;
        int val = arr[hole];
        while(hole>0 && val<arr[hole-1]) {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = val;
        printArray(arr, n);
    }
}

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0; i<n; i++) {
        cout<<"Enter the "<<i<<" element: ";
        cin>>arr[i];
        cout<<endl;
    }

    insertionSort(arr, n);
    printArray(arr, n);
}