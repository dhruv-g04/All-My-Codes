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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    int maxi, i, j, k, ansi = 0, second = -1;

    for (i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == n)
        {
            maxi = i;
        }
        if (v[i] == n - 1)
        {
            second = i;
        }
    }
    if (n == 1)
    {
        ans = {1};
    }
    else if (v[n - 1] == n)
    {
        int i, j, k;
        for (int i = maxi; i < n; i++)
        {
            ans[ansi++] = v[i];
        }
        // ans[ansi++] = v[maxi - 1];
        // cout<<maxi-1<<"::";
        for (j = maxi - 1; j >= 0; j--)
        {
            if (v[j] < v[0])
            {
                break;
            }
            else
            {
                ans[ansi++] = v[j];
            }
        }
        for (k = 0; k <= j; k++)
        {
            ans[ansi++] = v[k];
        }
    }
    else if (maxi != 0)
    {
        int i, j, k;
        for (int i = maxi; i < n; i++)
        {
            ans[ansi++] = v[i];
        }
        ans[ansi++] = v[maxi - 1];

        for (j = maxi - 2; j >= 0; j--)
        {
            if (v[j] < v[0])
            {
                break;
            }
            else
            {
                ans[ansi++] = v[j];
            }
        }
        for (k = 0; k <= j; k++)
        {
            ans[ansi++] = v[k];
        }
    }
    else
    {
        int i, j, k;
        // cout << "ds:";
        for (int i = second; i < n; i++)
        {
            ans[ansi++] = v[i];
        }
        if (second != n-1)
        {

            ans[ansi++] = v[second - 1];
            for (k = 0; k <= second - 2; k++)
            {
                ans[ansi++] = v[k];
            }
        }
        else{
            for (k = 0; k <= second - 1; k++)
            {
                ans[ansi++] = v[k];
            }
        }
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
        solve();
    }
    return 0;
}
