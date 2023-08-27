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
int solve(int a[], vector<int> b, int n, int s)
{
    int op = 0;
    int i, j;
    i = 0;
    j = n - 1;
    int sum = 0;
    int bi = 0;
    int bj = b.size() - 1;
    // i = b[bi];
    // j = b[bj];
    // bi+=1;
    // bj-=1;

    // accumulate(a, a + n, sum);
    sum = b.size();
    cout << s << " " << sum << endl;
    while (bi <= bj)
    {
        if (s == sum)
        {
            return op;
        }
        else if (s < sum)
        {
            // op += i + (n - 1 - bj);
            if ((b[bi] - i) < (j - b[bj]))
            {
                cout << "YES\n";
                op += (i - (b[bi] + 1) + 1);
                i = b[bi] + 1;
                sum--;
                bi++;
                cout << (b[bi] - i + 1) << "OPPOPPO" << endl;
            }
            else
            {
                cout << "NO\n";
                op += ((b[bj] - 1) -j + 1);
                j = b[bj] - 1;
                cout << j << " j\n";
                bj--;
                sum--;
            }
        }
        else
        {
            return -1;
        }
    }
    return -1;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        // int b[n];
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                b.push_back(i);
            }
        }
        PrintArray(b)
                cout
            << endl;
        // b.clear();
        cout << solve(a, b, n, s) << " ANS " << 7 - t << endl;
    }
    return 0;
}
