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

void SubSequences(string s, char b[],int n,int i , int j){
    if (s[i]=='\0'){
        b[j]='\0';
        cout<<b<<endl;
        return;
    }
    SubSequences(s,b,n,i+1,j);
    b[j]=s[i];
    SubSequences(s,b,n,i+1,j+1);
    return;
}

signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        int n=8;
        char b[n];
        // b[0]={'\0'};
        char s[]="abc";
        // cout<<s;    
        SubSequences(s,b,n,0,0);
    }
    return 0;
}
