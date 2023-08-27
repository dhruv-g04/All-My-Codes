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

#define ll long long
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
int ans=0;
int str_to_num(string s,int n){
    if (n<=0){
        return 0;
    }
    return str_to_num(s,n-1)*10+s[n-1]-'0';
}

signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s="12345";
        cin>>s;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        cout<<str_to_num(s,n);
        // cout<<endl;
        // cout<<ans/10;
    }
    return 0;
}
