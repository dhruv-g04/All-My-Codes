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

bool compare(auto a, auto b)
{
    return a.first < b.first;
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
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector<pair<int,int>> diff(n);

    for(int i=0;i<n;i++){
        diff[i]={a[i]-b[i],i};
    }
    // for(auto x:diff){
    //     cout<<x.first<<" ";
    // }
    // cout<<endl;
    sort(diff.begin(),diff.end());
    int last=diff[n-1].first;
    vector<int>ans;
    for(auto x:diff){
        if(x.first==last){
            ans.push_back(x.second);
        }
        // cout<<x.first<<" ";
    }
    sort(ans.begin(),ans.end());
    // for()
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x+1<<" ";
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
