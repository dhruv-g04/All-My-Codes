#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string makeSmallestPalindrome(string s)
{
    vector<char> v;
    string ans;
    for (auto x : s)
    {
        v.push_back(x);
    }
    int l=s.length();
    for(int i=0;i<l/2;i++){
        if (s[i]==s[l-i-1]){
            continue;
        }
        else if(s[i]>s[l-i-1]){
            s[i]=s[l-i-1];
        }
        else if(s[i]<s[l-i-1]){
            s[l-i-1]=s[i];
        }
    }
    return s;

}

int main()
{
    string s;
    cin >> s;
    string x = makeSmallestPalindrome(s);
    cout << x;
    return 0;
}