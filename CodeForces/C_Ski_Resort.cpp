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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int z = 0;
    int ans = 0;
    for (int x : v)
    {
        if (x > q)
        {
            c.push_back(z);
            z = 0;
        }
        else
        {
            z++;
        }
    }
    if(v[n-1]<=q){
        c.push_back(z);
    }
    for (int x : c)
    {
        // cout << x << "x:";
        if (x < k)
        {
            continue;
        }
        else
        {
            ans += ((x-k+1)* (x + 2-k) / 2) ;
        }
    }
    cout << ans;
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
