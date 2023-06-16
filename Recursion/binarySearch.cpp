#include<iostream>
using namespace std;

int binarySearch(int *arr, int s, int e , int k ) {

    if(s>e)
        return -1;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
        return mid;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22};
    int size = sizeof(arr) / sizeof(int);
    int key = 18;

    cout << "The required no. is in index:\t " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}