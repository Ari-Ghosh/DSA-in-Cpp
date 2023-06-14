#include<bits/stdc++.h>

using namespace std;

void mergeSortedArray(int arr1[], int n1, int arr2[], int n2, int arr3[], int n3){
    int i =0, j =0, k=0;

    while(i<n1 && j<n2){ // important step
        if(arr1[i] <= arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else
            arr3[k++] = arr2[j++];
    }

    while(i < n1){
        arr3[k++] = arr1[i++];
    }

    while(j < n2){
        arr3[k++] = arr2[j++];
    }

    cout<<"The Merged Array: "<<endl;

    for(int i =0; i<n3; i++){
        cout<<arr3[i]<<endl;
    }
}

int main(){
    int arr1[] = {1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    int arr3[n1+n2];
    int n3 = sizeof(arr3) / sizeof(int);
    mergeSortedArray(arr1, n1, arr2, n2, arr3, n3);
    return 0;
}