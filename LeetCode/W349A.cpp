#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string smallestString(string s)
{
    int j = 0;
    bool flag = 0;
    while (s[j] == 'a')
    {
        j++;
    }
    int c = 0;
    for (int i = j; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            break;
        }
        c++;
    }

    for (int k = j; k < c + j; k++)
    {
        s[k] = s[k] - 1;
        flag = 1;
    }
    // }
    if (flag != 1)
    {
        if (s[s.size() - 1] == 'a')
        {
            s[s.size() - 1] = 97 + 25;
        }
        else
        {
            s[s.size() - 1] = s[s.size() - 1] - 1;
        }
    }
    // cout << s;
    return s;
}

int main()
{
    // char s='b';
    // int c;
    // c='b';
    // s=s-1;
    // cout<<s;
    smallestString("aaaadas");
    return 0;
}