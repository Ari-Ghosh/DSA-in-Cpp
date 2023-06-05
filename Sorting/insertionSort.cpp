#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int t = arr[i];
        int j = i-1;
        while(j >= 0){
            if(arr[j] > t)
                arr[j+1] = arr[j];

            else 
                break;
            j--;
        }
        arr[j+1] = t;
    }
    cout<<"The Sorted Array: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<endl;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(int);
    insertionSort(arr, n);
    return 0;
}