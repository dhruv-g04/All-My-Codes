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

    vector<char> v(n);
    vector<char> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ans.push_back(v[0]);
    int i = 1;
    while (i < n)
    {
        while (v[i] != ans[ans.size()-1] and i < n)
        {
            // cout<<i<<":i:";
            // cout<<v[i]<<" ";
            i++;
        }
        if(i==n){
            ans.pop_back();
        }
        // cout<<endl;
        i++;
        if (i < n)
        {
            ans.push_back(v[i]);
        }
        i++;
    }
    for(auto x:ans){
        cout<<x;
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
        solve();
    }
    return 0;
}
