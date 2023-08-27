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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int om = LONG_MIN;
    int addy = LONG_MIN;
    int c = 0;
    for (int x : a)
    {
        if (x != 0)
        {
            c++;
        }
        else
        {
            om = max(om, c);
            c = 0;
        }
    }
    om = max(om, c);
    c = 0;
    for (int x : b)
    {
        if (x != 0)
        {
            c++;
        }
        else
        {
            addy= max(addy, c);
            c = 0;
        }
    }
    addy = max(addy, c);
    c = 0;
    if(addy>om){
        cout<<"Addy";
    }
    else if(om>addy){
        cout<<"Om";
    }
    else{
        cout<<"Draw";
    }
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
