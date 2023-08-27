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
    int n,m,k;
    cin >> n>>m>>k;
    vector<pair<int,int>> v(k);
    map<pair<int,int>,bool> dia;
    int x,y;
    cin>>x>>y;
    int tx=x,ty=y;
    for (int i = 0; i < k; i++) {
        int a,b;
        cin>>a>>b;
        v[i]={a,b};
    }
    while(tx>0 and ty>0){
        // dia[make_pair(tx,ty)]=true;
        dia[make_pair(tx, ty)] = true;
        tx--;
        ty--;
    }
    tx=x,ty=y;
    while(tx<=n and ty<=m){
        // dia[make_pair(tx,ty)]=true;
        dia[make_pair(tx, ty)] = true;
        tx++;
        ty++;
    }
    for(auto t:v){
        // cout<<t.first<<":"<<t.second<<" ";
        if((abs(x-t.first)+abs(y-t.second))%2==0){
            cout<<"NO"<<endl;
            return ;
        }
        // if(dia[t]==true){
        //     cout<<"NO"<<endl;
        //     return ;
        // }
    }
    cout<<"YES"<<endl;
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
