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
    map<int, int> m;
    vector<int> v(n);
    vector<int> ans;
    int mini=LONG_LONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    sort(v.begin(),v.end());
    int i = 0;
    int car = 0;
    int zero = 0;
    while (m[i] != 0)
    {
        mini=min(mini,m[i]);
        zero+=m[i]-mini;
        m[i]=mini;
        i++;
    }
    // cout << i << ":i:"<<m[i-1]<<": ";
    for (int k = i; k < n; k++)
    {
        if(v[k]>i)
            zero++;
    }
    while (i >= 0)
    {
        int temp = m[i - 1] - car;
        for (int j = 0; j < temp; j++)
        {
            ans.push_back(i);
        }
        car+=temp;
        i--;
    }
    for (int j = 0; j < zero; j++)
    {
        ans.push_back(0);
    }
    cout << ans.size() << endl;
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
        solve();
    }
    return 0;
}
