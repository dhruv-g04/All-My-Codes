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
    int n,k;
    cin >> n>>k;
    stack<int> s;
    // s.push();

    vector<int> v(n);
    cin>>v[0];
    s.push(v[0]);
    for (int i = 1; i < n; i++) {
        cin >> v[i];
        s.push(min(s.top(),v[i]));
    }
    // // for()
    // if (k>n){
    //     cout<<0<<endl;
    //     // cout<<"fd";
    //     return ;
    // }
    // int min=LONG_LONG_MIN;
    // for(int i=0;i<k-1;i++){
    //     min=min()
    //     s.pop();
    // }
    // int ans=0;
    // while(!s.empty()){
    //     ans+=s.top();
    //     s.pop();
    // }
    sort(v.begin(),v.end());
    for(int i=n-1;i>=   ;i--)

    cout<<ans<<endl;
    
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
