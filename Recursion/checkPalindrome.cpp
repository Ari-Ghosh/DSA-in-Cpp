#include<bits/stdc++.h>

using namespace std;

bool isPalindrome(string str, int i , int j){
    if(i > j)
        return true;
    
    if(str[i] != str[j])
        return false;
    else
        return isPalindrome(str, i+1,j-1);
}

int main(){
    string str = "MALAYALAM";
    int n = str.length();

    if(isPalindrome(str, 0, n-1))
        cout<<"The String is Palindrome";
    
    else
        cout<<"The String is not Palidrome";
    
    return 0;
}