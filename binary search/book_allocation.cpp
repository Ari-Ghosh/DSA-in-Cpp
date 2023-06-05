#include<bits/stdc++.h>

using namespace std;

bool isPoss(int arr[], int n, int m, int mid){
    int studentReq = 1;
    int curr_sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid)
            return false;
 
        if (curr_sum + arr[i] > mid) {
            studentReq++;
 
            curr_sum = arr[i];
 
            if (studentReq > m)
                return false;
        }
 
        else
            curr_sum += arr[i];
    }
    return true;
}

int findpages(int arr[], int n, int m){
    int sum = 0;

    if(n < m)
        return -1;

    for(int i=0; i<n; i++)
        sum = sum + arr[i];

    int e = sum;
    int s =0;
    int result = INT_MAX;
    
    while(s <= e){

        int mid = s + (e-s)/2;

        if(isPoss(arr, n, m, mid)){
            result = mid;

            e = mid - 1;
        }
        else 
            s = mid + 1;
    }
    return result;
}

int main(){
    int arr[] ={12, 34, 67, 90};
    int n = sizeof(arr)/sizeof(int);
    int m = 2;

    cout<<"Minimum number of pages: "<<findpages(arr, n, m)<<endl;
    return  0;
}