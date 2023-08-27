#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minLength(string s)
{
    int l = s.length();
    int a = 0, b = 0, c = 0, d = 0, ans = l;
    bool ab = false, cd = false, flag = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'A')
        {
            if (flag = 0)
            {
                if (ab == 1)
                {
                    ans -= 2 * min(a, b);
                }
                if (cd == 1)
                {
                    ans -= 2 * min(c, d);
                }
                a = 0, b = 0, c = 0, d = 0;
            }
            ab = 1;
            flag = 1;
            a++;
        }
        else if (s[i] == 'B')
        {
            if (ab == 1)
            {
                b++;
                flag = 0;
            }
        }
        else if (s[i] == 'C')
        {
            if (flag = 0)
            {
                if (ab == 1)
                {
                    ans -= 2 * min(a, b);
                }
                if (cd == 1)
                {
                    ans -= 2 * min(c, d);
                }
                a = 0, b = 0, c = 0, d = 0;
            }
            c++;
            cd = 1;
            flag = 1;
        }
        else if (s[i] == 'D')
        {
            if (cd == 1)
            {
                d++;
                flag = 0;
            }
        }
        else
        {
            // cout << a << b << c << d << " ";

            if (ab == 1)
            {
                ans -= 2 * min(a, b);
            }
            if (cd == 1)
            {
                ans -= 2 * min(c, d);
            }
            a = 0;
            b = 0;
            c = 0;
            d = 0;
            ab = 0;
            cd = 0;
        }
    }

    // cout << a << b << c << d << " Me ";

    if (ab == 1)
    {
        ans -= 2 * min(a, b);
    }
    if (cd == 1)
    {
        ans -= 2 * min(c, d);
    }
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    ab = 0;
    cd = 0;
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int x = minLength(s);
    cout << x;
    return 0;
}