// Code By Dhruv
// Please Don't stalk me :)

#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>

using namespace std;

#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;

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

struct Node
{
    Node *links[2];

public:
    bool containsKey(int bit)
    {
        return links[bit] != NULL;
    }
    void put(int bit, Node *node)
    {
        links[bit] = node;
    }
    Node *get(int bit)
    {
        return links[bit];
    }
};
class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(int num)
    {
        Node *node = root;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (!node->containsKey(bit))
            {
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    int getMax(int num)
    {
        Node *node = root;
        int maxNum = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = (num >> i) & 1;
            if (node->containsKey(1 - bit))
            {
                maxNum = maxNum | (1 << i);
                node = node->get(1 - bit);
            }
            else
            {
                node = node->get(bit);
            }
        }
        return maxNum;
    }
};
int findMaximumXOR(vector<int> &nums)
{
    Trie trie;
    for (auto it : nums)
    {
        trie.insert(it);
    }

    int maxi = 0;
    for (auto it : nums)
    {
        maxi = max(maxi, trie.getMax(it));
    }
    return maxi;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> c(n+1);
    vector<int> mem;
    int maxv = -1;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        maxv = max(maxv, v[i]);
    }
    int difault = maxv;
    int cx = 0;
    c[0]=0;
    for (int i = 0; i < n; i++)
    {
        cx = cx ^ v[i];
        c[i+1] = cx;
        // cout<<c[i]<<" "; 
    }
        int temp=findMaximumXOR(c);
        maxv=max(maxv,temp);
    
    cout << maxv;
    cout << endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
