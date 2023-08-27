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
int maxhouse;
int solve(vector<int> v,int n,int b,int i){
    if (i>=n or b==0){
        return 0;
    }
    int inc=0;
    if (v[i]<=b){
        inc=1+solve(v,n,b-v[i],i+1);
    }
    int exc=solve(v,n,b,i+1);
    maxhouse=max(inc,exc);
    return maxhouse;
}

signed main()
{
    int t=1;
    cin >> t;
    for (int z=1;z<=t;z++)
    {
        cout<<"Case #"<<z<<": ";
        int n,b;
        cin >> n>>b;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // cout<<solve(v,n,b,0)<<endl;
        sort(v.begin(),v.end());
        int sum=0;
        int c=0;
        int i=0;
        while(b-sum>=v[i]){
            sum+=v[i];
            c+=1;
            i+=1;
        }
    cout<<c<<endl;
    }
    return 0;
}
