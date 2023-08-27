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

int solve(int n, int s, int h, int d)
{
    int ans = 0;
    if (n == 0)
    {
        ans = 0;
        return ans;
    }
    ans+=solve(n-1,s,d,h);
    ans+=1;
    cout<<"Move "<<n<<" disk from "<<s<<" to "<<d<<endl;
    ans+=solve(n-1,h,s,d);
    return ans;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        cout << solve(n, 1, 2, 3);
    }
    return 0;
}
