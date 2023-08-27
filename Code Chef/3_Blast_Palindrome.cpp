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
    string s;
    cin >> s;
    if (n % 3 == 1)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < 26; i++)
    {
        char ch = 'a' + i;
        // cout<<ch<<":c ";
        int j = n + 1;
        int k = -1;
        for (int p = 0; p < n; p++)
        {
            if (s[p] == ch and p % 3 == 0)
            {
                // cout<<<"me";
                j = p;
                break;
            }
        }
        for (int p = n - 1; p >= 0; p--)
        {
            if (s[p] == ch and (n - 1 - p) % 3 == 0)
            {
                // cout<<"hi";
                k = p;
                break;
            }
        }
        // cout<<ch<<"-"<<j<<":"<<k<<"\n";
        if (j < k)
        {
            // if ((k - j - 1) % 3 == 0)
            //     cout << "YES1\n";
            cout << "YES\n";
            return;
        }
    }
    cout << "NO";
    cout << endl;
    return;

    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
