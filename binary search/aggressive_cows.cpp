#include<bits/stdc++.h>

using namespace std;

bool isPossible(int arr[], int k, int mid, int n) {
    
    int cowCount = 1;
    int lastPos = arr[0];
    
    for(int i=0; i<n; i++ ){
        
        if(arr[i]-lastPos >= mid){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}


int aggrocows(int arr[], int n, int k){

    int min = 0;
    int max = arr[n-1] - arr[0];
    int result = INT_MIN;
    int mid = min + (max - min) / 2;

    while(min <= max) {
        if(isPossible(arr, k, mid, n)) {
            result = mid;
            min = mid + 1;
        }
        else
        {
            max = mid - 1;
        }
        mid = min + (max - min) / 2;
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