#include<bits/stdc++.h>

using namespace std;

int getSum(int *arr, int n){

    if(n == 0) {
        return 0;
    }

    if(n == 1 )
    {
        return arr[0];
    }

    int tsum = arr[0] + getSum( arr+1, n-1 );

    return tsum;
}

int main(){
    int arr[] = {2, 3, 8, 12, 2, 8};
    int n = sizeof(arr) / sizeof(int);

    cout<<"The sum of the array: \t"<<getSum(arr, n);

    return 0;
}