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

void solve(){
    int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    // bool flag=true;
    int e=0;
    int o=0;
    for (int x: v){
        if (x<=0){
            cout<<"NO"<<endl;
            return;
        }
        if (x%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    if (e==n){
        cout<<"YES"<<endl;
        return;
    }
    if (o==n){
        cout<<"YES"<<endl;
        return;
    }
    sort(v.begin(),v.end());
    if (v[0]%2==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
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
