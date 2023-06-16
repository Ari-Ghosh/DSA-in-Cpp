#include<bits/stdc++.h>

using namespace std;

string reverseString(string &str, int n, int i = 0){
    if( n == 0 )
        return "";
    
    else if ( n == 1 )
        return str;

    else{
        swap(str[i++], str[n-1]);
        return reverseString(str, n-1, i);
    }

}

int main(){
    string str = "AMRITSAR";
    int n = str.length();

    cout<<reverseString(str, n);
    
    return 0;
}