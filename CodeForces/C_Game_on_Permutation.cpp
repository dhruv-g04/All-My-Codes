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
// int s(vector<int> &dp, ) 
void solve()
{
    int n, k;
    cin >> n;
    // cin >> n>>k;
    int c = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = 0;
    int a = 0;
    vector<int> dp(n, -1);
    dp[0]=0;
    for (int i = 1; i < n; i++)
    {
        int j = i-1;
        int num = v[i];
        while(j >=0)
        {
            if (v[j] < num)
            {
                break;
            }
            j--;
        }
        // if (dp[j] == -1)
        // {
        //     int c = 0;
        //     int num = v[i];
        //     for (int i = 0; i < j; i++)
        //     {
        //         if (v[i] < num)
        //         {
        //         }
        //     }
        // }
        if(j<0){
            dp[i]=0;
        }
        else
        dp[i] = dp[j] + 1;
    }
    int ans=0;
    for(int x: dp){
        if(x==1){
            ans++;
        }
        // cout<<x<<" ";
    }
    cout<<ans;
    cout  << endl;
    // vector<pair<int, int>> p;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     if (v[i] < v[i + 1])
    //     {
    //         c++;
    //         flag = 1;
    //         a = i;
    //     }
    //     else
    //     {
    //         if (flag)
    //         {
    //             p.push_back({a, i});
    //         }
    //         flag = 0;
    //     }
    // }
    // if (flag)
    // {
    //     p.push_back({a, n-1});
    // }
    // for (auto x : p)
    // {
    //     cout << x.first << ":" << x.second << " ";
    // }
    
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
