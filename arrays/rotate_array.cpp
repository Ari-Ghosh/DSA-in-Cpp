#include<bits/stdc++.h>

using namespace std;

void rotateArr(int arr[], int n, int d){
    int store[n];
    int j =0;
    
    for(int i = d; i < n; i++)
        store[j++] = arr[i];

    for(int i = 0; i<d; i++)
        store[j++] = arr[i];

    cout<<"The Resultant Array: "<<endl;

    for(int i = 0; i<n; i++)
        cout<<store[i]<<endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int d = 2;
    int n = sizeof(arr) / sizeof(int);
    rotateArr(arr, n, d);
    return 0;
}