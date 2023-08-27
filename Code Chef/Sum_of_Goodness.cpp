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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int c=0;
    int same=0;
    int ans=0;
    bool flag=false;
    if (v[0]!=1){
        cout<<0<<endl;
        return ;
    }
    for(int i=0; i<n;i++){
        if (v[i+1]-v[i]==1 and flag==false){
            c++;
            ans+=c;
        }
        else if (v[i+1]-v[i]==0){
            same++;
            flag=true;
            // break;
        }
    }
    if (flag==false){
        ans+=v[n-1];
    }
    cout<<ans;
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
