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


int suma(vector <int>& v, int w)
{
    cout<<w<<":W ";
    int n=v.size();
    int pa=0;
    for (int i = 0; i < n; i++) {
        pa+=(v[i]+(2*w))*(v[i]+(2*w));
    }
    return pa;
}



void solve()
{
    int n,c,w;
    cin >> n>>c;
    vector<int> v(n);
    int pa=0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        // pa+=v[i]*v[i];
    }
    int left=c-pa;
    int s=0;
    // int maxw=sqrt(left/4);
    int e=(sqrt(c)-1)/2;
    e=5;
    int mid=((e-s)/2)+(s/2);
    cout<<mid<<":mid ";
    // while(s<=e){
    //     // cout<<" ME ";
    //     int ts=suma(v,mid);
    //     if(ts==c){
    //         cout<<mid<<endl;
    //         return;
    //     }
    //     else if(ts>c){
    //         e=mid;
    //     }
    //     else{
    //         s=mid+1;
    //     }
    // }
    cout<<e;
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
