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
        int xorn = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // xorn=xorn^a[i];
        }

        int b[31] = {0};
        // int a[]={1,1,1,2,2,2,5,5,5,20};
        // int n=sizeof(a)/sizeof(a[0]);
        for (int i = 0; i < n; i++)
        {
            int k = 0;
            int mask = 1;
            for (int j = 0; j < 32; j++)
            {
                if ((mask & a[i]) == 0)
                {

                    b[k] = b[k] + 0;
                }
                else
                {
                    b[k] = b[k] + 1;
                }
                mask = mask << 1;
                k++;
            }
        }
        for (auto x : b)
        {
            cout << x << " ";
        }
        cout << endl;
        int l = 0;
        int ans = 0;
        int mainans = 0;
        for (int u : b)
        {
            if (u % n == 0)
            {
                ans += (1 * (1 << l));
            }
            if (ans <= x)
            {
                cout << "Ans: " << ans << endl;
                mainans = ans;
            }
            else
            {
                break;
            }
            // cout<<ans<<" ";
            l++;
        }
        cout << mainans << ":main" << endl;

        // cout<<xorn<<endl;
        solve();
    }
    return 0;
}
