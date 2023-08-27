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

// #define long long ll;
#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (int i = a; i < b; i++)
#define for_dec(i, a, b) for (int i = a - 1; i >= b; i--)
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

void solve()
{

    return;
}

void merge(int *a, int *b, int *c, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int k = mid + 1;
    int j = s;
    while (i <= mid and k <= e)
    {
        if (b[i] <= c[k]){
            a[j++]=b[i++];
        }
        else{
            a[j++]=c[k++];
        }
    }
    while(i <= mid){
        a[j++]=b[i++];
    }
    while(k <= e){
        a[j++]=c[k++];
    }
    return;
}

void merge_sort(int a[], int s, int e)
{
    if (s>=e){
        return;
    }
    int mid = (s + e) / 2;
    int b[mid + 2]={0}, c[e - mid+2]={0};
    for_inc(i, s, mid+1)
    {
        b[i] = a[i];
    }
    for_inc(i, mid + 1, e+1)
    {
        c[i] = a[i];
    }
    merge_sort(b, s, mid);
    merge_sort(c, mid + 1, e);
    merge(a, b, c, s, e);
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n]={0};
        // vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // PrintArray(a);
        cout<<endl;
        merge_sort(a, 0, n - 1);
        PrintArray(a);

        // solve();
    }
    return 0;
}
