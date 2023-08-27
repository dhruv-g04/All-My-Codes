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
string a[]={
    "zero","one","two","three","four","five","six","seven","eight","nine"
};
// int digit;//do not define globally

void num_to_str(int n){
    if (n==0){
        return  ;
    }
    int digit=n%10;
    n=n/10;
    num_to_str(n);
    cout<<a[digit]<<" ";

}


signed main()
{
    int t=1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // vector<int> v(n);
        // for (int i = 0; i < n; i++) {
        //     cin >> v[i];
        // }
        num_to_str(n);
    }
    return 0;
}
