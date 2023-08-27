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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int andd = v[0];
    int c = 1;
    int minadd = v[0];
    for (int i = 1; i < n; i++)
    {
        minadd &= v[i];
    }
    if(minadd!=0){
        cout<<1<<endl;
        return ;
    }
    // cout<<minadd<<":min ";
    // cout << v[0] << ":v " << (andd & v[0]) << ":and ";
    for (int i = 1; i < n; i++)
    {
        // cout << v[i] << ":v " << (andd & v[i]) << ":and ";
        if (andd==minadd)
        {
            c++;
            andd = v[i];
        }
        andd = (andd & v[i]);
    }
    if(andd!=minadd){
        c--;
    }
    cout << c;
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
