// Code By Dhruv
// Please Don't stalk me :)

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define PrintArray(a)     \
    for (auto i : a)      \
        cout << i << " "; \
    cout << endl;
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
const long long inf = 1e18;
const int M = 1e9 + 7;

#define NeedForSpeed         \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void SieveOfEratosthenes(int n, vector<bool> &prime)
{
    prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

void solve()
{
    int m, k, a1, ak;
    cin >> m >> k >> a1 >> ak;
    int sum = 0;
    int tak = ak;
    while (tak and sum + k <= m)
    {
        sum += k;
        tak--;
    }
    if (m - sum <= a1)
    {
        cout << 0;
        cout << endl;
        return ;
    }
    sum+=a1;
    int c=0;
    int want=m;
    while(want-k>=sum){
        want-=k;
        c++;
    }
    if(want==sum){
        cout<<c;
    }
    else if(sum-(want-k)<=a1){
        cout<<c+1;
    }
    else{
        cout<<c+want-sum;
    }
    // want=sum-want;
    // int ans=0;
    // if(tak==0){
    //     while(sum+k<=m){
    //         sum+=k;
    //         ans++;
    //     }
    // }
    // ans+=m-sum;
    // cout<<ans;
    cout << endl;
    return;
}

signed main()
{
    NeedForSpeed int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
