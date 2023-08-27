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

bool check(vector<int> &v)
{
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        if (v[i] - v[i - 1] == 3)
        {
            if ((i + 1) < n and v[i + 1] - v[i] == 3)
            {
                // cout << "col";
                return true;
            }
        }
        if (v[i - 1] % 3 == 1 and (i + 1) < n and v[i] - v[i - 1] == 1 and v[i + 1] - v[i] == 1)
        {
            // cout << "row";
            return true;
        }
        if (v[i - 1] == 1 and (i + 1) < n and v[i] == 5 and v[i + 1] == 9)
        {
            // cout << "d1";
            return true;
        }
        if (v[i - 1] == 3 and (i + 1) < n and v[i] == 5 and v[i + 1] == 7)
        {
            // cout << "d2";
            return true;
        }
    }
    return false;
}

void solve()
{
    int n = 3;
    // cin >> n;
    vector<char> a(3);
    vector<char> b(3);
    vector<char> c(3);
    vector<int> cro;
    vector<int> nou;
    vector<int> plus;
    vector<int> dot;
    int cnt = 1;
    int win = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (a[i] == 'X')
        {
            cro.push_back(cnt);
        }
        if (a[i] == '+')
        {
            plus.push_back(cnt);
        }
        if (a[i] == 'O')
        {
            nou.push_back(cnt);
        }
        cnt++;
        // cout << a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (b[i] == 'X')
        {
            cro.push_back(cnt);
        }
        if (b[i] == '+')
        {
            plus.push_back(cnt);
        }
        if (b[i] == 'O')
        {
            nou.push_back(cnt);
        }
        cnt++;
    }
    for (int i = 0; i < 3; i++)
    {
        if (c[i] == 'X')
        {
            cro.push_back(cnt);
        }
        if (c[i] == '+')
        {
            plus.push_back(cnt);
        }
        if (c[i] == 'O')
        {
            nou.push_back(cnt);
        }
        cnt++;
    }
    // for (int x : cro)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (int x : nou)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // for (int x : plus)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    // cout << win << ":win";
    // win += check(cro);
    // // cout << win << ":win";
    // win += check(nou);
    // // cout << win << ":win";
    // win += check(plus);
    // cout << win << ":win";

    if(check(cro)){
        cout<<'X';
    }
    else if (check(nou)){
        cout<<'O';
    }
    else if(check(plus)){
        cout<<'+';
    }
    else{
        cout<<"DRAW";
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
