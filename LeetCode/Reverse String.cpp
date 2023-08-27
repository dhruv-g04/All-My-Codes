#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string reverseWords(string s)
{
    // cout<<s;
    vector<string> v;
    string temp = "";
    string ans = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            if (temp != " ")
            {
                v.push_back(temp);
            }
            temp = "";
        }
        else
        {
            temp = temp + s[i];
        }
    }
    if (temp != " ")
    {
        v.push_back(temp);
    }
    temp = "";
    for (int i = v.size() - 1; i >= 0; i--)
    {
        // cout << v[i] << " ";
        if (i == 0)
        {
            ans = ans + v[i];
        }
        else
        {
            ans = ans + v[i] + ' ';
            cout<<v[i];
        }
    }
    cout << ans;
}

int main()
{
    string s;
    cin >> s;
    reverseWords("  hello world  ");
    return 0;
}