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
int rec(vector<int>&v,int m,int d,vector<vector<int>>&dp,int i,int loss){
    if(i>=v.size()){
        return 0;
    }
    if(m<=0){
        // cout<<"df";
        return 0;
    }
    if(dp[i][loss]!=-1){
        return dp[i][loss];
    }
    int inc=v[i]+rec(v,m-1,d,dp,i+1,0)-(loss*d);
    int exc=rec(v,m,d,dp,i+1,loss+1);
    return dp[i][loss]=max(inc,exc);
}
void solve()
{
    int n,m,d;
    // cin >> n;
    cin >> n>>m>>d;
    vector<int> v(n);
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout<<rec(v,m,d,dp,0,0);
    cout<<endl;
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
