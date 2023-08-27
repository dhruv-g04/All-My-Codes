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
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
void solve()
{
    int m = 1000000007;
    int n, k;
    cin >> n >> k;
    int c = 0;
    // if (k == 1)
    // {
    //     cout << 1 << endl;
    //     return;
    // }
    // if (k > n)
    // {
    //     int fact = 1;
    //     for (int i = k; i >k-n; i--)
    //     {
    //         fact =(fact*i);
    //     }
    //     c=fact;
    //     cout << c%m ;
    // }
    // else
    // {
    //     int fact = 1;
    //     for (int i = 1; i <= k; i++)
    //     {
    //         fact = (fact*(i));
    //     }
    //     cout << fact%m;
    // }
    int fact = 1;
    // int m = k;
    for (int i = 0; i <n; i++)
    {
        if (k - i > 0)
        {
            fact *= k - i;
        }
        else{
            fact*=1;
        }
        fact=fact%m;
    }
    cout <<fact<< endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    // cout<<fact(3);
    while (t--)
    {
        solve();
    }
    return 0;
}
