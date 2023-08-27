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
    int n, k;
    cin >> n >> k;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
    //
    int i = 0;
    int ans = 0;
    int c = 0;
    int temp=n;
    int ans1=0;
    while (n)
    {
        int an = n & 1;
        ans += an;
        if(an==1){
            if(ans1==0){ans1+=pow(2,c)+1;}
            else ans1=pow(2,c)+ 2*ans1;
        }
        c++;
        n = n >> 1;
    }
    // cout<<ans<<":"<<c<<" ";
    // cout<<temp<<"n:";
    if (temp >= (pow(2, k) - 1) and k<31)
    {
        // cout<<"dsf";
        cout << pow(2, k);
    }
    else
    {
        // ans1=pow(2, c-1);
        // ans1+=pow(2,ans-1);
        cout <<temp+1;
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
