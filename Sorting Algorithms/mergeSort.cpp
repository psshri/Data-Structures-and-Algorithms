#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int left[], int right[], int n, int l, int r) {
    int i=0, j=0, k=0;
    while(j<l && k<r) {
        if(left[j] <= right[k]) {
            arr[i] = left[j];
            j++;
        }
        else{
            arr[i] = right[k];
            k++;
        }
        i++;
    }
    while(j<l) {
        arr[i] = left[j];
        i++;
        j++;
    }
    while(k<r) {
        arr[i] = right[k];
        i++;
        k++;
    }
}

void mergeSort(int arr[], int n) {
    if(n<2) {
        return;
    }
    else {
        int l = n/2;
        int r = n - l;
        int left[l];
        int right[r];
        for(int i=0; i<l; i++) {
            left[i] = arr[i];
        }
        for(int i=l; i<n; i++) {
            right[i-l] = arr[i];
        }
        mergeSort(left, l);
        mergeSort(right, r);
        merge(arr, left, right, n, l, r);
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
    }
    mergeSort(arr, n);
    printArray(arr, n);
}