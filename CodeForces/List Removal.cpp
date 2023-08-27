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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        // cout<<v[p[i]-1]<<" ";
        // v.erase(v.begin()+p[i]-1);
    }
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        cout << v[p[i] - 1] << " ";
        for (int j = p[i] - 1; j < temp - 1; j++)
        {
            v[j] = v[j + 1];
        }
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        temp--;
    }
    return;
}

signed main()
{

    solve();

    return 0;
}
