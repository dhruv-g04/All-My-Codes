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
void solve()
{
    int n;
    cin >> n;
    int a[100001] = {0};
    vector<int> v(n);
    vector<int>s;
    for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // a[v[i]]++;
        }

    for (int i = 0; i < n; i++)
    {

        // cin >> v[i];
        a[v[i]]++;
        if ((a[v[i]]) > 1)
        {
            if (v[i - 1] == v[i])
            {
                // s.insert(v[i]);
                // a[v[i]]++;
                continue;
            }
            else{
                // cout<<v[i]<<":v ";
                cout << "Case #" << ttt << ": "
                 << "IMPOSSIBLE" << endl;
                // cout<<"IMPOSSIBLE"<<endl;
                return;
            }
        }
        else{
            s.push_back(v[i]);
        }
    }
    // set<int> s(v.begin(),v.end());
    cout << "Case #" << ttt << ": ";
    for (int x : s) {
        std::cout << x << " ";
    }
    cout<<endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    for (ttt = 1; ttt <= t; ttt++)
    {

        solve();
    }
    return 0;
}
