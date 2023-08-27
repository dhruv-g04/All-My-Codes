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

void solve(char in[], char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    if (in[i] != '\0')
    {
        int ind = in[i] - '0';
        char ch = 'A' + ind - 1;
        out[j] = ch;
        solve(in, out, i + 1, j + 1);
        if (in[i + 1] != '\0')
        {
            int fi = in[i] - '0';
            int si = in[i + 1] - '0';
            int ind = (10 * fi) + si;
            if (ind <= 26)
            {

                char ch = 'A' + ind - 1;
                out[j] = ch;
                solve(in, out, i + 2, j + 1);
            }
        }
    }
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        char in[100] = "1234";
        char out[100];
        solve(in, out, 0, 0);
    }
    return 0;
}
