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
map<int, int> m;
void cumulative_sum(int n, int a[], int *cum_arr)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        cum_arr[i]=sum;
        m.insert({sum, i});
    }
    return;
}

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
    int t;
    cin >> t;
    while (t--)
    {
        int ans=0;
        int n;
        cin >> n;
        int arr[n];
        int cum_sum[n];
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cumulative_sum(n, arr, cum_sum);
        // PrintArray(cum_sum);
        cout<<endl;
        int i=0;
        int m1=n-2;
        while (cum_sum[m1]<0 or m1!=0){
            m1--;
        }
        int i1=0;
        int maxs=arr[0];
        int maxi=0;
        while(i1<m1){
            if (cum_sum[i1]>maxs){
                maxi=i1;
                maxs=cum_sum[i1];
            }
            i++;
        }
        int ls=cum_sum[n-1];
        ans=ls+maxs+cum_sum[m1];
        
        cout<<ans<<endl;
    }

    return;
}

signed main()
{
    solve();
    return 0;
}
