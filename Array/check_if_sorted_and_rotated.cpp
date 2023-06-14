#include<bits/stdc++.h>

using namespace std;

bool rotateSortedArr(int arr[], int n){
    int minEle = INT_MAX;
    int maxEle = INT_MIN;
    int minIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < minEle) {
            minEle = arr[i];
            minIndex = i;
        }
    }
  
    int flag1 = 1;
  
    for (int i = 1; i < minIndex; i++) {
        if (arr[i] < arr[i - 1]) {
            flag1 = 0;
            break;
        }
    }
  
    int flag2 = 1;
  
    for (int i = minIndex + 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            flag2 = 0;
            break;
        }
    }
  
    if (flag1 && flag2 && (arr[n - 1] < arr[0]))
        return true;
    else
        return false;
}

int main(){
    int arr[] = {3, 4, 5, 1, 2};
    int n = sizeof(arr) / sizeof(int);
    if(rotateSortedArr(arr, n))
        cout<<"The given array is rotated and sorted";
    else
        cout<<"The gioven array is not rotated and sorted";
    return 0;
}