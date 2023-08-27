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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort(v.begin(),v.end());
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i = k; i < n; i++)
    {
        pq.push({v[i], i});
    }
    // while (!pq.empty())
    // {
    //     std::cout << pq.top() << ":"; // Print the top element
    //     pq.pop();                     // Remove the top element
    // }

    // cout << endl;
    int i = 0;
    int ind;
    int val;
    while (i < n - k and !pq.empty())
    {
        ind = pq.top().second;
        val = pq.top().first;
        while (m[val] and !pq.empty())
        {
            // cout<<"df";
            pq.pop();
        }
        // cout<<val<<":val \n";
        ind = pq.top().second;
        val = pq.top().first;
        if (v[i] > val)
        {
            swap(v[i], v[ind]);
            pq.pop();
            // cout<<"hi ";/
            pq.push({v[ind], ind});
        }
        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        m[v[i + k]]++;
        // cout<<v[i + k]<<":";
        i++;
    }
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
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
