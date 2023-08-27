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
    bool flaga = 0, flagb = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    // sort(a.begin(), a.end());
    // for (int i = 0; i <2* n; i++) {
    //     cout<< v[i]<<" ";
    // }

    for (int i = 0; i < n; i++)
    {
        // cout << ":|"<<flaga<<"|:";
        if (flaga == 1)
        {
            m.push_back(a[i]);
            m.push_back(b[i]);
        }
        else if (flagb==1)
        {
            // cout<<":g:";
            m.push_back(b[i]);
            m.push_back(a[i]);
        }
        else if (a[i] == b[i])
        {
            m.push_back(a[i]);
            m.push_back(a[i]);
        }
        else if (i != n - 1 && (a[i] == a[i + 1]))
        {
            flaga = 1;

            flagb = 0;
            m.push_back(b[i]);
            m.push_back(a[i]);
        }
        else if (i != n - 1 && a[i] == b[i + 1])
        {
            // cout << ":me:";
            flagb = 1;
            flaga = 0;
            // cout << "/"<<i<<"/";
            m.push_back(b[i]);
            m.push_back(a[i]);
        }
        else if (i != n - 1 && (b[i] == a[i + 1]))
        {
            // cout << ":mdfe:";
            flaga = 1;
            flagb = 0;
            m.push_back(a[i]);
            m.push_back(b[i]);
        }
        else if (i != n - 1 && b[i] == b[i + 1])
        {
            // cout << ":mdfe:";
            flagb = 1;
            flaga = 0;
            m.push_back(a[i]);
            m.push_back(b[i]);
        }
        else
        {
            // cout << "/"<<flaga<<"/";
            if (flaga == 1)
            {
                m.push_back(a[i]);
                m.push_back(b[i]);
            }
            else
            {
                // cout<<":g:";
                m.push_back(b[i]);
                m.push_back(a[i]);
            }
        }
    }
    // cout<<m.size();
    for (int i = 0; i < 2 * n; i++)
    {
        cout << m[i] << " ";
    }

    // int ma = 1,c = 1;
    // for (int i = 0; i < 2 * n - 1; i++)
    // {
    //     if (v[i] == v[i + 1])
    //     {
    //         c++;
    //     }
    //     else
    //     {
    //         ma = max(ma, c);
    //         c = 1;
    //     }
    // }
    // ma = max(ma, c);
    // c = 1;

    // cout << ma;
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
