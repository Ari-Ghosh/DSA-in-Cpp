#include<bits/stdc++.h>

using namespace std;

int nstairs(int n){
    if(n < 0)
        return 0;
    
    if(n == 0)
        return 1;

    int ans = nstairs(n-1) + nstairs(n-2);

    return ans;
}

int main(){
    
    int n;

    cout<<"Enter the value n:\t";

    cin>>n;

    cout<<"The number of steps:\t" <<nstairs(n);

    return 0;
}