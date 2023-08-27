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
    vector<int> v;
    vector<char> vowel={'a','e','i','o','u'};
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
    string s;
    cin>>s;
    int c=0;
    int vow=0;
    bool flag=0;
    int ans1=1;
    for(int i=0;i<s.size();i++){
        if(count(vowel.begin(),vowel.end(),s[i])){
            vow++;
            if(flag){
                v.push_back(c);
                ans1*=c+1;
                ans1=ans1%M;
                flag=0;
                c=0;
            }
        }
        if(flag){
            // cout<<s[i]<<":s ";
            c++;
        }
        if(vow==k){
            flag=1;
            vow=0;
            c=0;
        }
    }
    // v.push_back(c);
    int ans=1;
    for(int x:v){
        // if(x!=0){
            ans*=x+1;
        // }
    }
    cout<<ans1%M<<endl;
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
