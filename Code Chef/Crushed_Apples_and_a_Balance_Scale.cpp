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
    int m, n;
    cin >> m >> n;
    if (n > m)
    {
        cout << "NO";
        cout << endl;
        return;
    }
    else if (n == m)
    {
        cout << "YES";
        cout << endl;
        return;
    }
    else
    {
        while (m != 0)
        {
            if (n % m == 0)
            {
                cout << "YES";
                cout << endl;
                return;
            }
            if (m % 2 == 0)
            {
                m = m / 2;
            }
            else{
                break;
            }
        }
    }
    cout << "NO";
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
