#include<bits/stdc++.h>

using namespace std;

int isPoss(int arr[], int mid, int n, int k){
    
}

int aggrocows(int arr[], int n, int k){

    int min = 0;
    int max = arr[n-1] - arr[0];
    int result = INT_MIN;

    while(min <= max){
        int mid = min + (max - min) / 2;

        if(isPoss(arr, mid, n, k)){
            
            result = mid;

            min = mid + 1;

        }

        else 
            max = mid - 1;
    }

    return result;
}

int main(){
    int arr[] = {1, 2, 4, 8, 9};
    int k = 3;
    int n = sizeof(arr) / sizeof(int);
    sort(arr, arr+n);
    cout<<"The diatance between the cows are: "<<aggrocows(arr, n, k);
    return 0;
}