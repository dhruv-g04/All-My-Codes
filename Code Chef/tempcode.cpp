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
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mainans = 0;
        for (int i = 0; i < 30; i++)
        {
            int temp = 0;
            for (int j = 0; j < n; j++)
            {
                temp |= 1 << ((v[j] >> i) & 1);
            }
            if (temp != 3)
            {
                continue;
            }
            int temp2 = x;
            if (temp2 & (1 << i))
            {
                temp2 ^= 1 << i;
            
            for (int j = i - 1; j >= 0; j--)
            {
                temp2 |= 1 << j;
            }
            }
            mainans = max(mainans, temp2);
        }
        cout << mainans << endl;
        // solve();
    }
    return 0;
}
