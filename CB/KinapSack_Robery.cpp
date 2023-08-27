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

int solve(int itemwt[], int price[], int capacity, int n)
{
    if (n == -1 || capacity == 0)
    {
        return 0;
    }
    int inc = INT32_MIN, exc = INT32_MIN;
    if (capacity >= itemwt[n])
    {

        inc = price[n] + solve(itemwt, price, capacity - itemwt[n], n - 1);
    }

    exc = solve(itemwt, price, capacity, n - 1);
    return max(inc, exc);
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n = 5;
        int itemwt[5]={1,2,3,5};
        int price[5]={20,50,60,100};
        int capacity = 6;
        cout<<solve(itemwt, price, capacity, n - 1);
    }
    return 0;
}
