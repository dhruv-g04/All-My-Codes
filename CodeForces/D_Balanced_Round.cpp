// Code By Dhruv
// Please Don't stalk me :)

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
const long long inf = 1e18;
const int M = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> len;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0;
    int ml = 0;
    int c=1;
    for (i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] > k)
        {
            ml = max(c, ml);
            // cout<<c<<":c ";
            c = 1;
            // break;
        }
        else{
            c++;
        }
    }
    ml = max(c, ml);
    // if (i == n)
    // {
    //     cout << 0 << endl;
    //     return;
    // }
    cout << n - ml << endl;
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
