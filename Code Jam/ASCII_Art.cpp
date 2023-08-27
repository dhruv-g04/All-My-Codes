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
    // n--;
    int c=ceil(n/26.0);
    // cout<<c<<":c ";
    // if ()
    int i;
    for (i=0;i<100000000;i++){
        int su=i*(i+1)/2;
        if (su>=c){

            break;
        }
    }
    // cout<<i<<":i ";
    int nn=n-((i-1)*(i)/2)*26;
    // cout<<nn<<":nn ";
    int mod=nn%i;
    int ans=(nn/i);
    if (mod!=0){
        ans++;
    }
    // cout<<ans<<":ans ";
    // if (mod!=0){
    //     ans++;
    // }
    char ansc=ans+65-1;
    cout << "Case #" << ttt << ": "<<ansc<<endl;
    // cout<<ansc;
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
