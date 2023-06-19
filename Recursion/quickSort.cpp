#include<bits/stdc++.h>

using namespace std;

int partition(int *arr, int s, int e){

    int pivot = s;
    int c = 0;

    for( int i = s+1; i <= e; i++){
        if(arr[i] <= arr[pivot])
            c++;
    }

    int pivotIndex = s + c;
    swap(arr[pivot], arr[pivotIndex]);

    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){
        
        while(arr[i] <= arr[pivotIndex])
            i++;

        while(arr[j] > arr[pivotIndex])
            j--;

        if(i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);

    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e){

    if(s >= e)
        return;
    
    int p = partition(arr, s, e);

    quickSort(arr, s, p-1);

    quickSort(arr, p+1, e);
    
}

int main(){

    int arr[] = { 5, 2, 8, 3, 9, 7, 12, 3, 6, 5, 4, 23, 78, 54, 36 };
    int n = sizeof(arr) / sizeof(int);

    quickSort(arr, 0, n-1);

    cout<<"The Sorted Array:\t";

    for(int i = 0; i < n; i++)
        cout<<arr[i]<<"\t";

    cout<<endl;

    return 0;
}