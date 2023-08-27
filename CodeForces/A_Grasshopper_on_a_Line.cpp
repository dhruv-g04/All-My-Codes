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
    int x, k;
    cin >> x >> k;
    vector<int> c;
    if ((x % k != 0) or (k>x))
    {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }
    else{
        while(x%k==0){
            c.push_back(1);
            x-=1;
        }
        c.push_back(x);
        cout<<c.size()<<endl;
        for(auto x: c){
            cout<<x<<" ";
        }
        cout<<endl;
    }

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
