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

// #define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;


bool cmp(pair<int, int>& a,
        pair<int, int>& b)
{
    return a.second > b.second;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> ans(n);
    vector<int> l(q);
    vector<int> r(q);
    vector<int> count(n, 0);
    vector<pair<int, int>>ic;
    int it=0;
    //  ic.push_back(make_pair(0,0));
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> l[i];
        cin >> r[i];
    }
    if (n==1){
        cout<<v[0]<<endl;
        cout<<v[0]<<endl;
        return;
    }
    for (int i = 0; i < q; i++)
    {
        for (int j = l[i]; j <= r[i]; j++)
        {
            count[j-1]++;
        }
    }
    // cout<<"EDfdf";
    for (int i = 0; i < n; i++)
    {
        // ic[i]=count[i];
        ic.push_back(make_pair(i,count[i]));
    }
    sort(ic.begin(),ic.end(),cmp);
    // for (auto x:ic){
    //     cout<<x.first<<":"<<x.second<<endl;
    // }
    int k=0;

    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        ans[ic[i].first]=v[n-1-k];
        k++;
    }

    for(int i=0;i<n;i++){
        it+=ans[i]*count[i];
    }

    cout<<it<<endl;
    for (auto x:ans){
        cout<<x<<" ";
    }

    cout<<endl;
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
