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
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int c = 0, maxc = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            c++;
        }
        else
        {
            // cout<<c<<": ";
            c++;
            maxc = max(c, maxc);
            c = 0;
        }
    }
    c++;
    maxc = max(c, maxc);
    c = 0;
    // if (c == n - 1)
    // {
    //     cout << n - c + 1 << endl;
    // }
    // else if (c == 0)
    // {
    //     cout << n + 1 << endl;
    // }
    // else
    // {
    //     cout << n - c << endl;
    // }
    cout<<maxc+1<<endl;

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
