#include <bits/stdc++.h>
#include <iostream>
using namespace std;

///////////////////A////////////////////////
long long minimumPossibleSum(int n, int tar)
{
    vector<int> vis(tar + 1, 0);
    int i = 1;
    vector<int> ans;
    // ans.push_back()

    while (i <= tar - i and ans.size() < n)
    {
        // cout<<i<<":i ";
        if (vis[i] == 0)
            ans.push_back(i);
        vis[tar - i]++;
        i++;
    }
    int l = ans.size();
    for (int i = 0; i < n - l; i++)
    {
        ans.push_back(tar + i);
    }
    long long int sum = 0;
    for (auto x : ans)
    {
        sum += x;
        // cout<<x<<" ";
    }
    return sum;
}

///////////////////B////////////////////////

///////////////////C////////////////////////
class Solution {
public:
    int minOperations(std::vector<int>& nums, int target) {
        std::priority_queue<int> pq(nums.begin(), nums.end());
        int total = 0;
        for (int num : nums) {
            total += num;
        }
        int operations = 0;
        while (!pq.empty() && total > target) {
            int num = pq.top();
            pq.pop();
            total -= num / 2;
            pq.push(num / 2);
            operations++;
        }
        if (total == target) {
            return operations;
        } else {
            return -1;
        }
    }
};

int minOperations(vector<int> &nums, int target)
{
    int n=nums.size();
    int sum=0;
    sort(nums.begin(),nums.end());
    int i=0;
    int c=0;
    while(i<n){
        if(sum>target){
            break;
        }
        sum+=nums[i];
    }
    if(sum==target) return 0;
    if(sum<target) return -1;

    for(;i>=0;i--){
        int temp=nums[i];
        while(temp>0 and sum-temp/2>target){
            temp/=2;
            sum-=temp;
        }
    }
}

int main()
{
    vector<char> vc = {};
    vector<int> v = {2, 3, 7, 9, 3};
    vector<int> v2 = {91, 50};
    int n = 5;
    cout << minimumPossibleSum(16, 320);

    return 0;
}
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
    // int n,k;
    // cin >> n;
    // cin >> n>>k;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
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
