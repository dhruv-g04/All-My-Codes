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
    int n, k;
    // cin >> n;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    bool real = 0;
    set<pair<int, int>> sp;
    vector<int> v(n);
    vector<int> st(k);
    vector<int> e(k);
    for (int i = 0; i < k; i++)
    {
        cin >> st[i];
        cin >> e[i];
        st[i]--;
        e[i]--;
        // cout<<st[i]<<":"<<e[i]<<" ";
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            c++;
        }
        v[i] = c;
        // cout<<v[i];
    }
    for (int i = 0; i < k; i++)
    {
        int a = v[st[i]], b = v[e[i]];
        // cout<<a<<":"<<b<<" ";
        if (a == b)
        {
            if (s[st[i]] == '1')
            {
                // sp.insert({s})
                ans++;
            }
        }
        else
        {
            int one=b-a+1;
            int len=e[i]-st[i]+1;
            if(one!=len){
                ans++;
            }
            // if (s[st[i]] == '1')
            // {
            //     // sp.insert({s})
            //     ans++;
            // }
        }
    }
    cout << endl;
    // cout<<endl;
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
