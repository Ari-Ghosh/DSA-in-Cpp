#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min = i;
        for( int j=i+1; j<n; j++){
            if(arr[j] < arr[min])
                min = j;
        }
        if (min != i)
            swap(arr[min], arr[i]);
    }
    cout<<"The Sorted Array: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(int);
    selectionSort(arr, n);
    return 0;
}