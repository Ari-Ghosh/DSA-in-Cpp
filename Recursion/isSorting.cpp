#include<bits/stdc++.h>

using namespace std;

bool isSorted(int *arr, int n){ 
    if(n == 0 || n == 1)
        return true;

    if(arr[0] > arr[1])
        return false;
        
    else
        return isSorted(arr + 1, n - 1);
}

int main() {
    int arr[] = {2,4,5,6,8,11};
    int n = sizeof(arr) / sizeof(int);

    if(isSorted(arr, n))
        cout<<"Array is Sorted"<<endl;

    else
        cout<<"Array is not sorted"<<endl;

    return 0;
}