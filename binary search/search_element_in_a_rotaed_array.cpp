#include<bits/stdc++.h>

using namespace std;

int pivotsearch(int arr[], int s, int e){

    while(s <= e){

        int mid = s + (e-s) / 2;

        if(arr[mid] > arr[mid+1])
            return mid;
        
        else if(arr[0] > arr[mid])
            return pivotsearch(arr, s, mid-1);

        else
            return pivotsearch(arr, mid+1, e);
    }
    return -1;
}

int elementsearch(int arr[], int s, int e, int k){

    while(s <= e){

        int mid = s + (e-s) / 2;

        if(arr[mid] == k)
            return mid;

        else if (arr[mid] > k)
            return elementsearch(arr, s, mid-1, k);

        else
            return elementsearch(arr, mid+1, e, k);
    }
    return -1;
}

int main(){
    int arr[] = {5, 7, 8, 9, 11, 14, 2, 3, 4};
    int n = sizeof(arr) / sizeof(int);
    int k = 7;
    int pivot = pivotsearch(arr, 0, n-1);
    if(arr[0] > k)
        cout<<"The element found: "<<elementsearch(arr, pivot, n-1, k)<<endl;
    
    else
        cout<<"The element found: "<<elementsearch(arr, 0, pivot, k)<<endl;

    return 0;
}