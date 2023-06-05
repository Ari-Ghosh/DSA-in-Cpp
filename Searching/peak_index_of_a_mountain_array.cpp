#include<bits/stdc++.h>

using namespace std;

int peak (int arr[], int s, int e){

    while(s<=e){
        int mid = s + (e-s) / 2;

        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
            return mid;

        else if(arr[mid] < arr[mid+1] && arr[mid] > arr[mid-1])
            return peak(arr, mid+1, e);
        
        else if(arr[mid] > arr[mid+1] && arr[mid] < arr[mid-1])
            return peak(arr, s, mid-1);

        else
            return -1;
    }
    return -1;
}

int main(){
    int arr[] = {1,5,6,9,4,3,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<"The Peak is: "<<peak(arr, 0, n-1)<<endl;
    return 0;
}