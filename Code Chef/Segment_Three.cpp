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
    vector<int> v(n);
    int trys=0;
    int c = 0;
    int i = 0;
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum += v[i];
    }
    if (sum % 3 != 0)
        c += 3 - (sum % 3);
    int lastc = c;
    while (i < n)
    {
        // sum = 0;
        int k = 0;
        while (k < 3)
        {
            map<int, int> m;
            int j = i - 2;
            sum -= v[i - 3];
            sum += v[i];
            int tempc;
            if (sum % 3 != 0)
            {
                tempc = 3 - (sum % 3);
            }
            else
            {
                tempc = 0;
            }
            if (tempc > lastc)
            {
                m[tempc] = i;
                i++;
                // lastc = tempc;
            }
            else{

            }
            // c += 3 - (sum % 3);
        }

        // \\\\\\\\\\\\\\\\\\\\\\;

        if (i + 2 < n)
        {
            int j = 0;
            while (i < n and j < 3)
            {
                sum += v[i];
                i++;
                j++;
            }
            cout << sum << ":" << sum % 3 << " | ";
            if (sum % 3 != 0)
                c += 3 - (sum % 3);
        }
        else
        {
            break;
        }
    }
    int j = 0;
    int sum = 0;
    cout << i << ":i ";
    if (i != n)
    {
        i = n - 3;
        while (i < n and j < 3)
        {
            sum += v[i];
            i++;
            j++;
        }
        if (sum % 3 != 0)
            c += 3 - (sum % 3);
    }
    cout << c << endl;
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
