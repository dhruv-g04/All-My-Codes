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
int ttt;

void solve(vector<int> &v, int m, int r, int n)
{
    int min = 0;
    int max = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int pos = v[i];
        
        // if (pos <= min)
        // {
            int check=m;
            if (pos+r < m){
                check=pos+r;
            }
            // cout<<check<<":check ";
            //     cout<<min<<":min ";
            if (min==m){
                break;
            }
            if (check > min )
            {
                // cout<<pos<<":pos ";
                cnt++;
            }
        // }
        if (min >= (pos - r))
        {
            min = pos + r;
        }
        else
        {

            cout << "Case #" << ttt << ": "
                 << "IMPOSSIBLE" << endl;
            return;
        }
    }
    cout << "Case #" << ttt << ": "
         << cnt << endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    for (ttt = 1; ttt <= t; ttt++)
    {
        int m, r, n;
        cin >> m >> r >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        solve(v, m, r, n);
    }
    return 0;
}
