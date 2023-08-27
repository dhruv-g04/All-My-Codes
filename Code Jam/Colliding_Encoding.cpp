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

int ttt;
void solve()
{

    // int n;
    // cin >> n;
    vector<int> v(26);
    // vector<int> a(1000, 0);
    for (int i = 0; i < 26; i++)
    {
        cin >> v[i];
    }
    int s;
    cin >> s;
    string str[s];
    vector<int> stri(s);
    for (int i = 0; i < s; i++)
    {

        cin >> str[i];
        int mul = 1;
        int tempint = 0;
        for (auto x : str[i])
        {
            tempint += mul * v[(x - 65)];
            // cout<<tempint<<" ";
            mul *= 10;
        }
        stri[i] = tempint;
        // if (a[tempint] > 0)
        // {
        //     cout << "Case #" << ttt << ": "
        //          << "YES" << endl;
        //     return;
        // }
        // a[tempint]++;
        // cout<<tempint<<" ";
    }
    sort(stri.begin(), stri.end());
    for (int i = 0; i < s-1; i++)
    {
        if (stri[i] == stri[i + 1])
        {
            cout << "Case #" << ttt << ": "
                 << "YES" << endl;
            return;
        }
    }
    // for ()
    cout << "Case #" << ttt << ": "
         << "NO" << endl;
    return;
}
signed main()
{
    int t = 1;
    cin >> t;
    for (ttt = 1; ttt <= t; ttt++)
    {
        solve();
    }
    return 0;
}
