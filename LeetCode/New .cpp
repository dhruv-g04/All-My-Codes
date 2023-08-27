

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void rec(string &s)
{
    int l = s.length();
    int a = 0, b = 0, c = 0, d = 0, ans = l;
    bool ab = false, cd = false, flag = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if (s[i] == 'A' and s[i + 1] == 'B')
        {
            // for(int i; )
            s.erase(i, 2);
            flag = 1;
            // cout<<s<<endl;
        }
        if (s[i] == 'C' and s[i + 1] == 'D')
        {
            flag = 1;
            s.erase(i, 2);
            // cout<<s<<endl;
        }
    }
    if (flag == 1)
    {
        flag=0;
        rec(s);
    }
}

int minLength(string s)
{
    rec(s);
    return s.length();
}

int main()
{
    string s;
    cin >> s;
    int x = minLength(s);
    cout << x;
    return 0;
}