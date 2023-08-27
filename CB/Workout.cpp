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

    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        // vector<int> diff(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int maxdif = 0;
        for (int j = 0; j < n - 1; j++)
        {
            maxdif = max(maxdif, abs(v[j] - v[j + 1]));
        }
        if (maxdif % 2)
        {
            cout <<"Case #"<<q<<": "<< (maxdif + 1) / 2<<endl; 
        }
        else
        {
            cout <<"Case #"<<q<<": "<< maxdif / 2<<endl;
        }
        solve();
    }
    return 0;
}
