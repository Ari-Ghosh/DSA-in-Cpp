#include<bits/stdc++.h>

using namespace std;

int linearSearch(int *arr, int n, int d, int index = 0){

    if( n == 0)
        return -1;

    if(arr[index] == d)
        return index;

    else
        return linearSearch(arr, n-1, d, index+1);
    
    return -1;
}

int main(){
    int arr[] = {2, 3, 8, 12, 17};
    int n = sizeof(arr) / sizeof(int);

    int d = 12;

    cout<<"The index of required element: \t"<<linearSearch(arr, n, d);

    return 0;
}