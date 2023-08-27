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
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> vf;
    vector<int> c(n + 1, 0);
    vector<int> m(n +1, 0);
    // map<int,int>m;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i]<=n){
            m[v[i]]++;
        }
    }
    int maxl = 0;
    for (int i = 1; i <=n; i++)
    {
        if(m[i]==0){
            continue;
        }
        int a = i;
        while (a <= n)
        {
            c[a]+=m[i];
            maxl = max(maxl, c[a]);
            a += i;
        }
    }
    cout << maxl << endl;
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
