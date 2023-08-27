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

bool compare(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
    {
        return a[0] > b[0];
    }
    return a[1] < b[1];
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
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }
        sort(all(temp));
        v[i] = temp;
    }
    sort(v.begin(), v.end(), compare);
    int sum=0;
    
    for(int i=1;i<n;i++){
        sum+=v[i][1];
        v[0].push_back(v[i][0]);
    }
    sort(all(v[0]));
    sum+=v[0][0];
    cout <<sum<< endl;
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
