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

void all_substring(char a[],int n){
    string s;
    if (a[n]=='\0'){
        cout<<s;
        return ;
    }

    return all_substring(a,n+1);
}

signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n];
        // vector<int> v(n);
        int i;
        for ( i = 0; i < n; i++) {
            cin >> a[i];
        }
        a[i]='\0';
        all_substring(a,0);
    }
    return 0;
}
