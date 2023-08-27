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
    vector<char> v(n);
    vector<int> count(28, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        count[v[i] - 97]++;
    }
    // PrintArray(count);
    int o = 0;
    int e = 0;
    for (int i = 0; i < 28; i++)
    {
        if (count[i] > 0)
        {

            if (count[i] % 2 == 0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
    }
    // if (o != 1 and o != 0)

    if (o == 0)
    {
        if (e > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else if (o == 1)
    {
        if (e > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            int c = 0;
            for (int i = 0; i < 28; i++)
            {

                if (count[i] > 0)
                {
                    c = count[i];
                    break;
                }
            }
            // cout<<c<<"c\n";
            // if (c % 2 == 0)
            // {
            //     cout << c / 2 << endl;
            // }
            // else
            // {
                // if(c>)
            cout << 2<< endl;
            // }
        }
    }
    else
    {
        cout << 0 << endl;
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
