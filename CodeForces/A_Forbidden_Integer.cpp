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
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    if (x != 1)
    {
        cout << "YES\n";
        cout << n << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }
    if (k > 2 and n % 2)
    {
        cout << "YES\n";
        cout << n / 2 << endl;

        while (n > 0)
        {
            if (n == 3)
            {
                cout << 3 << " ";
                n = n - 3;
                break;
            }
            cout << 2 << " ";
            n = n - 2;
        }
        cout << endl;

        return;
    }
    else if (k > 1 and n % 2 == 0)
    {
        cout << "YES\n";
        cout << n / 2 << endl;
        while (n > 0)
        {
            n -= 2;
            cout << 2 << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        cout << "NO";
    }
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
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
