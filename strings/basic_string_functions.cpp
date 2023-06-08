#include<bits/stdc++.h>

using namespace std;

int length(char str[]){
    int i = 0;
    while(str[i] != '\0')
        i++;
    
    return i;
}

void reverse(char str[]){
    int n = length(str);
    for(int i = 0; i < n/2; i++)
        swap(str[i], str[n-i-1]);

    cout<<"The reversed array: ";
    for(int i = 0; i < n; i++)
        cout<<str[i];
}

bool checkPalindrome(char str[]){
    
}

int main(){
    char str[] = {'A', 'R', 'A', 'M', 'B', 'A', 'G', 'H', '\0'};
    reverse(str);
    cout<<"\nLength of the String "<<length(str)<<endl;
}