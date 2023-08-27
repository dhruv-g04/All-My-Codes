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
    vector<int> v;
    while (n)
    {
        int bit = n & 1;
        n >>= 1;
        v.push_back(bit);
    }
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    int sum = 1;
    int ele = 1;
    int len=v.size();
    for (int i = len - 2; i >= 0; i--)
    {
        if (v[i] == 0)
        {
            sum +=ele*2;
            ele*=2;
        }
        else{
            sum +=(ele*2)+1;
            ele=(ele*2)+1;
        }
    }
    cout<<sum;
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
