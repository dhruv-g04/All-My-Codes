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

// bool compare_a(auto a, auto b)
// {
//     return a.first < b.first;
// }
bool compare_d(int a, int b)
{
    return a > b;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    map<int , int > m;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]]=i;
    }
     std::map<int, int> sm(m.begin(), m.end());
    // sort(m.begin(),m.end(),compare_a);
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        // cout<<v[n-1-i];
        ans[m[v[n-1-i]]]=v[i];
    }
    for(int x:ans){
        cout<<x<<" ";
    }

    // for(auto x:m){
    //     cout<<x.first<<';'<<x.second<<" ";
    // }
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
