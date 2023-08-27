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
    int n,k;
    cin >> n;
    // cin >> n>>k;
    vector<int> v(n);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int m=n+n-1;
    ans.push_back(v[0]);
    // int l=0;
    for(int i=1;i<n;i++){
        if(ans[ans.size()-1]>v[i])
            ans.push_back(v[i]);
        ans.push_back(v[i]);
    }
    // cout<<m;
    cout<<ans.size();
    cout<<endl;
    for(int x:ans){
        cout<<x<<" ";
    }

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
