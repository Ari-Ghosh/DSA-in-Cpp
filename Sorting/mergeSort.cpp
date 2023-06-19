#include<bits/stdc++.h>

using namespace std;

void merge(int *arr, int s, int e){

    int mid = s + (e-s)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;

    for(int i = 0; i < len1; i++)
        first[i] = arr[k++];

    for(int i = 0; i < len2; i++)
        second[i] = arr[k++];

    // Merging two array in ascending array

    k = s;
    int i = 0, j = 0;

    while(i < len1 && j < len2){
        if(first[i] < second[j])
            arr[k++] = first[i++];
        
        else
            arr[k++] = second[j++];
    }

    while(i < len1)
        arr[k++] = first[i++];
    
    while(j < len2)
        arr[k++] = second[j++];

    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e){
    if(s >= e)
        return ;
    
    int mid = s + (e-s)/2;

    //Recursively Sorting the left side
    mergeSort(arr, s, mid);
    //Recursively Sorting the right side
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main(){
    int arr[] ={5, 2, 8, 3, 9, 7, 12, 3, 6, 5, 4, 23, 78, 54, 36, 8, 3, 19};
    int n = sizeof(arr) / sizeof(int);

    mergeSort(arr, 0, n-1);

    cout<<"The Sorted Array: \t";

    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";

    cout<<endl;

    return 0;
}