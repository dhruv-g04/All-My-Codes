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
        cout << i<<" ";

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}

void Quick_Sort(int *a, int s, int e)
{


    if (s >= e)
    {
        return;
    }
    int pivot = a[e];
    int i = s-1;
    int j = s ;
    while (j < e)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[j], a[i]);
        }
        j++;
    }
    i++;
    swap(a[i], a[e]);
    Quick_Sort(a, s, i-1);
    Quick_Sort(a, i + 1, e);
    return;
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n] = {0};
        // vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Quick_Sort(a, 0, n - 1);
        PrintArray(a);
    }
    return 0;
}
