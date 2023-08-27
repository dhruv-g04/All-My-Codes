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
void solve(int n, char s[],int o, int c, int i)
{
    if (i>=2*n)
    {
        s[i] = '\0';
        cout << s << endl;
        return;
    }
    if (o < n)
    {
        s[i] = '(';
        solve(n,s, o + 1, c, i + 1);
    }
    if (c < n and o > c)
    {
        s[i] = ')';
        solve(n, s,o, c + 1, i + 1);
    }
    return;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;

        char s[2 * n];
        cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        solve(n,s, 0, 0, 0);
    }
    return 0;
}
