#include <bits/stdc++.h>

using namespace std;

void reverseString(string &str, int i, int j)
{
    if(i > j)
        return ;

    swap(str[i], str[j]);
    i++;
    j--;

    reverseString(str, i, j);

}

int main()
{
    string str = "AMRITSAR";
    int n = str.length();

    reverseString(str, 0, n-1);

    cout<< str;

    return 0;
}