#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>

using namespace std;

#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}

void solve()
{
    string s;
    cin >> s;
    // string ans = s;
    bool one = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            one = 0;
        }
        else if (s[i] == '?')
        {
            if (one == 1)
            {
                s[i] = '1';
            }
            else
            {
                s[i] = '0';
            }
        }
        else
        {
            // if (one == 0)
            // {
            one = 1;
            // }
            // else{
            //     one=0;
            // }
        }
    }
    cout << s;

    // for ()
    // ans[0]='h';
    // cout<<s<<":"<<ans;

    cout << endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
