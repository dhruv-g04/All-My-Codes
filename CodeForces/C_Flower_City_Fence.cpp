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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // sort(v.begin(), v.end(), greater<int>());
    
    if (v[0] != n)
    {
        cout << "NO";
        cout << endl;
        return;
    }
    vector<int> num(v[0] + 2, 0);
    for (int x : v)
    {
        num[1]++;
        num[x + 1]--;
    }
    for (int i = 1; i < n+1; i++)
    {
        if (num[i] == v[i - 1])
        {
            // if (i + 1 < num.size())
                num[i + 1] = num[i] + num[i + 1];
        }
        else
        {
            cout << "NO";
            cout << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
