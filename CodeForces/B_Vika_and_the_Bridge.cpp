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
    vector<vector<int>> dis(k, {0});
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        dis[v[i] - 1].push_back(i + 1);
    }
    // int l = 1;
    // for (auto x : dis)
    // {
    //     if (x.size() >= 2)
    //     {
    //         // cout << l << "\n";
    //         // cout<<"hi";
    //         x.push_back(n + 1);
    //         // cout << x.size() << ":s\n";
    //     }
    //     l++;
    // }
    // for (auto x : dis)
    // {
    //     cout << x.size() << ":s\n";
    // }

    int maxx = n + 1;

    for (auto x : dis)
    {
        x.push_back(n + 1);
        vector<int> gap;
        for (int i = 1; i < x.size(); i++)
        {
            gap.push_back(x[i] - x[i - 1]-1);
        }
        sort(gap.begin(), gap.end());
        int max = gap[gap.size() - 1];
        gap.pop_back();
        gap.push_back(max / 2);
        sort(gap.begin(), gap.end());
        max = gap[gap.size() - 1];
        maxx=min(maxx,max);
    }
    cout << maxx;
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
