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
#define PrintArray(a)     \
    for (auto i : a)      \
        cout << i << " "; \
    cout << endl;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
    // cout << a.second.first << ":" << b.second.first << endl;
    if (a.second.first == b.second.first)
    {
        return a.second.second < b.second.second;
    }
    return a.second.first > b.second.first;
}
const long long inf = 1e18;
const int M = 1e9 + 7;

void solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            cin >> temp[j];
        }
        v[i] = temp;
    }
    // for (auto x : v)
    // {
    //     sort(x.begin(), x.end());
    //     // PrintArray(x);
    // }
    // unordered_map<int, pair<int, int>> dic;
    vector<pair<int, pair<int, int>>> vect(n);
    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end());
        int p = 0;
        int pan = 0;
        int sumh = 0;
        for (int j = 0; j < m; j++)
        {
            // v[i][j]
            if (v[i][j] + sumh <= h)
            {
                p++;
                sumh += v[i][j];
                pan += sumh;
                // cout << pan << ":pan";
            }
        }
        // dic[i] = {p, pan};
        vect[i] = {i, {p, pan}};
    }
    // sort(dic.begin(),dic.end(),compare);
    // vector<pair<int, int>> vec(dic.begin(), dic.end());

    // Sort the vector using the 'compare' function
    sort(vect.begin(), vect.end(), compare);
    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (vect[i].first == 0)
        {
            break;
        }
        pos++;
        // cout << vect[i].first << ":" << vect[i].second.first << ":" << vect[i].second.second << " ";
    }
    cout << pos << endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
