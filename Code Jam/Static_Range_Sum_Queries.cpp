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

// void cumulative_sum(int n, int a[], int *cum_arr)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + a[i];
//         cum_arr[i] = sum;
//     }
//     return;
// }
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        vector<int> cum(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                cum[i] = v[i];
            }
            else
            {
                cum[i] = cum[i - 1] + v[i];
            }
        }
        int a, b;
        while (q--)
        {
            cin >> a >> b;
            if (a - 2 < 0)
            {
                cout << cum[b - 1];
            }
            else
            {
                cout << cum[b - 1] - cum[a - 2];
            }
            cout<<endl;
            // solve();
        }
    }
    return 0;
}
