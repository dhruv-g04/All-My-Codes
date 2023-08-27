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

#define ll long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;
// void PrintArray(int a[],int n){
//     for (int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout <<endl;
// }

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][n] = {0};
        int i1 = 0, i2 = (n / 2), j = 0;
        int ele = 1;
        // cout << i1 << " " << i2 << endl;
        while (ele <(n * n) - n+1)
        {
            j = 0;
            while (j != n)
            {
                if (ele % 2)
                {
                    a[i1][j] = ele;
                    ele++;
                }
                else
                {
                    a[i2][j] = ele;
                    ele++;
                    j++;
                }
            }
            i1++;
            i2++;
        }

        int i3 = n - 1;
        int j1 = 0, j2 = (n / 2) + 1;
        while (ele != (n * n) + 1)
        {
            if (ele % 2)
            {
                a[i3][j1] = ele;
                ele++;
                j1++;
            }
            else
            {
                a[i3][j2] = ele;
                ele++;
                j2++;
            }
        }

        for_inc(r, 0, n)
        {
            for_inc(c, 0, n)
            {
                cout << a[r][c] << " ";
            }
            // cout<<a[r][n-1];
            cout << endl;
        }
    }
    return 0;
}
