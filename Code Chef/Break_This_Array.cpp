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
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    string s;
    cin>>s;
    int i=0;
    int j=0;
    int l=0,r=0;
    vector<int> vs(n);
    vs[0]=v[0];
    for(int i=1;i<n;i++){
        vs[i]=vs[i-1]+v[i];
    }
    // for(int i:vs){
    //     cout<<i<<" ";
    // }
    for(auto c:s){
        if(c=='L'){
            l++;
            j--;
        }
        else{
            r++;
            i++;
        }
    }
    int ans=0;
    i=r;
    j=n-1-l;
    cout<<i<<" "<<j<<" : ";
    int num=0;
    for(int r=i;r<=j;r++){
        for(int c=r+1;c<=j;c++){
            ans+=vs[c]-vs[r];
            ans%=M;
            num++;
            num%=M;
        }
    }
    cout<<ans/num;
    // cout<<l<<r;
    cout<<endl;
    return;
}

signed main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
