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
    int s, n;
    cin >> s >> n;
    vector<int> v(n);
    map<int ,int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;
    }
    // if (n == 1)
    // {
    //     if (v[0] == 1)
    //         cout << 0 << endl;
    //     else
    //     {
    //         cout << -1 << endl;
    //     }
    // }
    int c = 0;
    // for(int i=1;i<s+1;i++){
    //     if(m[i]==0){
    //         c+=i;
    //     }
    // }
    c+=(((v[0]*(v[0]-1))/2));
    for(int i=1;i<n;i++){
        c+=(((v[i]*(v[i]-1))/2)-((v[i-1])*(v[i-1]+1))/2);
        // cout<<c<<":";
    }
    c+=(((s*(s+1))/2)-((v[n-1])*(v[n-1]+1))/2);
    // // int i = 0;
    // // while (i < s)
    // // {
    // //     if ()
    // // }
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
