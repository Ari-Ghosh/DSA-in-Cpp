#include<bits/stdc++.h>

using namespace std;

void revArr(int arr[], int n, int k){
    if(k>n)
        cout<<"Index out of bounds"<<endl;

    cout<<"The resultant array"<<endl;
    
    for(int i = 0 ; i < k/2; i++){ // important to remeber to run the loop to k/2 otherwise it return the input itself
        swap(arr[i], arr[k-i-1]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int k = 4;
    revArr(arr, n, k);
    return 0;
}