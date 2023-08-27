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
    deque<int> v(n);

    map<int, bool> m;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        m[p[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // cout<<v[i]<<":v ";
    }
    int last = v.back();
    cout<<last<<":l ";
    cout<<m[last+1]<<":l+1 ";
    int c = 0;
    int zero = 0;
    for (int x : p)
    {
        if (x == 0)
        {
            zero++;
        }
    }
    cout<<zero<<":z ";
    while (zero<n)
    {
        c++;
        cout<<endl<<c<<endl;
        if (m[last + 1])
        {
            cout<<last+1<<":b ";
            m[last + 1] = 0;
            m[v.front()] = 1;
            // zero++;
            if (v.front() == 0)
            {
                zero++;
            }
            v.pop_front();
            v.push_back(last + 1);
            last++;
        }
        else
        {
            // cout<<":me ";
            v.push_back(0);
            // zero++;
            zero--;
            m[v.front()] = 1;
            cout<<v.front()<<":ff ";
            if (v.front() == 0)
            {
                zero++;
            }
            v.pop_front();
            last = 0;
        }
    }
    cout << c;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<":v ";
    }
    return;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
