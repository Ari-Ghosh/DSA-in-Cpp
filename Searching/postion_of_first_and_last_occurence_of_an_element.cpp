
#include<bits/stdc++.h>

using namespace std;

int firstpos (int arr[], int s, int e, int k, int n){
    while(s<=e){
        int mid = s + (e - s)/2;

        if (arr[mid] == k && (mid == 0 || k > arr[mid-1]))
            return mid;
        
        else if (k > arr[mid])
            return firstpos(arr, (mid+1), e, k, n);

        else
            return firstpos(arr, s, (mid-1), k, n); //This also contains the alternative statement for the if where mid != 0 and k < arr[mid-1]
    }
    return -1;
}

int lastpos (int arr[], int s, int e, int k, int n){
    while(s<=e){
        int mid = s + (e - s)/2;

        if (arr[mid] == k && (mid == n-1 || k < arr[mid+1]))
            return mid;
        
        else if (k < arr[mid])
            return lastpos(arr, s, (mid-1), k, n);

        else
            return lastpos(arr, (mid+1), e, k, n); //This also contains the alternative statement for the if where mid != n-1 and k > arr[mid+1]
    }
    return -1;
}


  
int main(){
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int n = sizeof(arr)/sizeof(int);
    int k = 5;
    int f = firstpos(arr, 0, n-1, k, n);
    int l = lastpos(arr, 0, n-1, k, n);
    int occurences = (l-f)+1;
    cout<<"The first pos is: "<<f<<endl;
    cout<<"The last pos is: "<<l<<endl;
    return 0;
}
