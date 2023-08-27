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
    cin >> n;
    // cin >> n>>k;

    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n);
        int j = 0;
        while (j < n - i - 1)
        {
            temp[j] = j + 1;
            j++;
        }
        int c = n;
        while (j < n)
        {
            temp[j] = c;
            c--;
            j++;
        }
        v[i] = temp;
    }
    int ans=0;
    for (auto V : v)
    {
        int plus = 0, minus = 0;
        int ind = 1;
        for (int x : V)
        {
            plus += x * ind;
            minus = max(minus, x * ind);
            ind++;
            // cout << x << " ";
        }
        ans=max(plus-minus,ans);
    }
    cout<<ans << endl;
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