#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n) {
    for(int i=0; i<=n-2; i++) {
        int counter = 0;
        for(int j=0; j<=n-2-i; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                counter = 1;
            }
        }
        printArray(arr, n);
        if(counter == 0) {
            break;
        }
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
    bubbleSort(arr, n);

    printArray(arr, n);
}