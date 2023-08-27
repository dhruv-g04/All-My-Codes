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

int maxnum(vector<int> m, int n)
{
    int ma = 1, c = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (m[i] == m[i + 1])
        {
            c++;
        }
        else
        {
            ma = max(ma, c);
            c = 1;
        }
    }
    ma = max(ma, c);
    c = 1;

    return ma;
}

void solve()
{

    int n;
    bool flaga = 1, flagb = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    // vector<int> m(2 * n);
    map<int, int> am;
    map<int, int> bm;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int c = 1;
    am[a[0]]=1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            c++;
        }
        else
        {
            am[a[i - 1]] = max(am[a[i - 1]], c);
            c = 1;
        }
    }
    am[a[n - 1]] = max(am[a[n - 1]], c);
            c = 1;
    
    // am[a[n - 1]] = max(am[a[n - 1]], c);
    // c = 1;
    c = 1;
    bm[b[0]]=1;
    for (int i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            c++;
        }
        else
        {
            bm[b[i-1]] = max(bm[b[i-1]], c);
            c = 1;
        }
    }
    bm[b[n-1]] = max(bm[b[n-1]], c);
    c = 1;
    
    int max_value = 0;
    for (int i = 0; i < n; i++)
    {
        m[a[i]] = am[a[i]] + bm[a[i]];
        if (m[a[i]] > max_value)
        {
            max_value = m[a[i]];
        }
    }
    for (int i = 0; i < n; i++)
    {
        m[b[i]] = am[b[i]] + bm[b[i]];
        if (m[b[i]] > max_value)
        {
            max_value = m[b[i]];
        }
    }
    // for (auto x : m)
    // {
    //     cout << x.first << ":" << x.second << endl;
    // }
    cout<<max_value;

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
