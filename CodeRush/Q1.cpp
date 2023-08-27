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

void cumulative_sum(int n, int a[],int *cum_arr){
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum+a[i];
        cum_arr[i]=sum;
    }
    return ;
}

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
    int n,m,x,y;
    string s;
    cin>>n>>m>>s;
    // PrintArray(s);
    int arr[n][m];
    for_inc(i,0,n){
        cin>>x,y;
        
    }
    
    return 0;
}
