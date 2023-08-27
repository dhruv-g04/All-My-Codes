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

string s[] = {
    "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void solve(char in[], char *out, int i, int j)
{
    int n=strlen(in);
    int ind = in[i] - '0';
    if (j>=n){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    for (int k = 0; s[ind][k] != '\0'; k++)
    {
        // int ind = in[i] - '0';
        out[j] = s[ind][k];
        solve(in,out,i+1,j+1);
    }
    i++;
    return;
}
signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        // int n;
        // cin >> n;
        char in[100] = "237";
        char out[100];
        // a="327";
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        solve(in, out, 0, 0);
        // cout<<out<<;
    }
    return 0;
}
