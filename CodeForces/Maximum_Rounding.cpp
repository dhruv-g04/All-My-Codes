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
    // cin >> n>>k;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
    string s;
    cin >> s;
    n = s.size();
    bool flag = 0;
    string st = s;
    int li = n;
    int carry = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if ((int)(s[i] - 48) + carry >= 5)
        {
            flag = 1;
            li = i;
            carry = 1;
        }
        else{
            carry=0;
        }
        // st[i]='0';
    }
    // cout<<li<<":li ";
    if (li == n)
    {
        cout << s;
    }
    else
    {
        char prev=s[li];
        // if(prev=='9'){
            s[li]='0';
            if(li==0){
                // cout<<"dd";
                s="1"+s;
                li++;
            }
            else{

                s[li-1]=(char)((int)(s[li-1])+1);
                // cout<<(char)((int)(s[li-1])-1)<<":::";
            }
        // }
        // for(int i=li;i>=0;i--){

        // }
        for (int i = li ; i < s.size(); i++)
        {
            s[i] = '0';
        }
        cout<<s;
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
