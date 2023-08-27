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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> copya(a);
    vector<int> ans(n);
    vector<pair<int,int>> ai;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ai.push_back({a[i],i});
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    sort(ai.begin(), ai.end());
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++){
        ans[ai[i].second]=b[i];
    }
    
    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;

    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        solve();
    }
    return 0;
}
