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

int no(int x){
    if (x==0){
        return 1;
    }
    else{
        return 0;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int a=1;
    int b=0;
    int sa=0,sb=0;
    for(int i=0;i<n;i++){
        if (v[i]=='A'){
            if (a==1){
                sa++;
            }
            else{
                a=1;
                b=0;
            }
        }
        else{
            if (b==1){
                sb++;
            }
            else{
                a=0;
                b=1;
            }
        }
    }
    cout<<sa<<" "<<sb<<endl;
    
    return;
}

signed main()
{
    int t=1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
