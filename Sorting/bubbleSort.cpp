#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        bool swapped = false; //Optimization for the best case
        for (int j=0; j<n-i; j++){
            if ( arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
            break;
    }
    cout<<"The Sorted Array: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    return 0;
}