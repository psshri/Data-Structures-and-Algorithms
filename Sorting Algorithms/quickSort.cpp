#include<iostream>
using namespace std;

void printArray(int arr[], int start, int end) {
    for(int i=start; i<=end; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pindex = start;
    for(int i=start; i<=end-1; i++) {
        if(arr[i] < pivot) {
            int temp = arr[pindex];
            arr[pindex] = arr[i];
            arr[i] = temp;
            pindex++;
        }
    }
    arr[end] = arr[pindex];
    arr[pindex] = pivot;
    return pindex;
}

int randomizedPartition(int arr[], int start, int end) {
    int pivotIndex = (rand()%(end-start+1))+start;
    swap(arr[pivotIndex], arr[end]);
    return partition(arr, start, end);
}

void quickSort(int arr[], int start, int end) {
    if(start < end) {
        int pindex = randomizedPartition(arr, start, end);
        quickSort(arr, start, pindex-1);
        quickSort(arr, pindex+1, end);
        printArray(arr, start, end);
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
    quickSort(arr, 0, n-1);
    printArray(arr, 0, n-1);
}