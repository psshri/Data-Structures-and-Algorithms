#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool bsRecursion(int arr[], int start, int end, int x) {
    if(start>end) {
        return 0;
    }
    int mid = start + (end-start)/2;
    if(arr[mid] == x) {
        return 1;
    }
    else if(arr[mid] < x) {
        start = mid+1;
        return bsRecursion(arr, start, end, x);
    }
    else return bsRecursion(arr, start, mid-1, x);
}

bool binarySearch(int arr[], int n, int x) {
    int start = 0;
    int end = n-1;
    return bsRecursion(arr, start, end, x);
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
    printArray(arr, n);
    int x;
    cout<<"Enter the value to be searched in the array: ";
    cin>>x;
    bool ans = binarySearch(arr, n, x);
    if(ans == 1) {
        cout<<x<<" exists in the array."<<endl;
    }
    else {
        cout<<x<<" does not exists in the array."<<endl;
    }

}