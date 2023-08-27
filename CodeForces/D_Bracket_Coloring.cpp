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
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    if (c != 0)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        vector<int> v;
        int nc = 0;
        c = 0;
        if (s[0] == '(')
        {
            v.push_back(1);
            c++;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '(')
                {
                    c++;
                }
                else
                {
                    // cout<<"h";
                    c--;
                }
                if (c < 0)
                {
                    v.push_back(2);
                }
                else if (c == 0)
                {

                    v.push_back(v[v.size() - 1]);
                }
                else
                {
                    v.push_back(1);
                }
            }
        }
        else
        {
            v.push_back(1);
            c--;
            for (int i = 1; i < n; i++)
            {
                if (s[i] == '(')
                {
                    c++;
                }
                else
                {
                    // cout<<"h";
                    c--;
                }
                // if (i==n-1)
                // {
                //     if(c>=0){

                //     }
                // }
                if (c > 0)
                {
                    v.push_back(2);
                }
                else if (c == 0)
                {

                    v.push_back(v[v.size() - 1]);
                }
                else
                {
                    v.push_back(1);
                }
            }
        }
        set<int> s(v.begin(), v.end());
        cout << s.size() << endl;
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

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
