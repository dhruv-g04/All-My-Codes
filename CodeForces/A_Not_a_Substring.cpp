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
    // int n, k;
    string s;
    cin >> s;
    stack<char> st;
    int c = 0;
    int n = s.size();
    int flag = 0;
    int bat = 0;
    if (n == 1 or s == "()")
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == '(' and s[i + 1] == ')')
        {
            flag++;
        }
        if(s[i]==')' and s[i+1]=='('){
            bat++;
        }
    }
    cout << "YES" << endl;
    if (bat)
    {
        string t="";
        for(int i=0;i<n;i++){
            t=t+')';
            t='('+t;
        }
        cout<<t;
    }
    else
    {
      for (int i = 0; i < n; i++)
        {
            cout << "()";
        }  
    }
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
