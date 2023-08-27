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
        string s;
        cin >> s;
        int i = 0;
        int alph = 0;
        int m = 0, e = 0, o = 0, w = 0;
        while (s[i] == 'm' or s[i] == 'M')
        {
            m = 1;
            i++;
        }
        while (s[i] == 'e' or s[i] == 'E')
        {
            e = 1;
            i++;
        }
        while (s[i] == 'o' or s[i] == 'O')
        {
            o = 1;
            i++;
        }
        while (s[i] == 'w' or s[i] == 'W')
        {
            w = 1;
            i++;
        }

        if (i == n and m == 1 and e == 1 and o == 1 and w == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}
