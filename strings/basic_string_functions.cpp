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
    int n = length(str);
    int f = 0;
    for(int i = 0; i < n/2; i++){
        if(str[i] != str[n-i-1])
            f=1;
    }
    if(f==1)
        return false;
    else
        return true;
}

bool validPalindrome(string str1){
    int n = str1.length();
    string temp;
    int f = 0;
    for(int i =0; i< n; i++){
        str1[i] = tolower(str1[i]);
    }

    for(int i =0; i< n; i++){
        if((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z')){
            temp[i] = str1[i];
        }
    }
    int k = temp.length();
    for(int i = 0; i < k/2; i++){
        if(temp[i] != temp[k-i-1])
            f=1;
    }
    if(f==1)
        return false;
    else
        return true;
}

int main(){
    char str[] = {'A', 'R', 'A', 'M', 'B', 'A', 'G', 'H', '\0'};
    string str1 = "Too hot to hoot.";
    reverse(str);
    cout<<"\nLength of the String "<<length(str)<<endl;
    if(checkPalindrome(str))
        cout<<"Palindrome"<<endl;
    
    else
        cout<<"Not Palindrome"<<endl;

    if(validPalindrome(str1))
        cout<<"Palindrome Sentence"<<endl;
    
    else
        cout<<"Not Palindrome Sentence"<<endl;
}