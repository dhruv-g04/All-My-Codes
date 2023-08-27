#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\\A\\\\\\\\\\\\\\\\

int sumOfSquares(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    int i = 1;
    for (int x : nums)
    {
        if (n % i == 0)
        {
            ans += (x * x);
            // cout<<x<<": ";
        }
        i++;
    }
    return ans;
}

// \\\\\\\\\\\\\\\\B\\\\\\\\\\\\\\\\

// int maximumBeauty(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     double med = 0;
//     int c = 0;
//     if (n % 2 == 0)
//     {
//         med = nums[n / 2] + nums[(n / 2) - 1];
//         med = med / 2.0;
//     }
//     else
//     {
//         med = nums[n / 2];
//     }
//     // cout<<med<<":m ";
//     for (int i = 0; i < n; i++)
//     {
//         if (abs(nums[i] - med) <= k)
//         {
//             c++;
//         }
//     }
//     return c;
// }

// \\\\\\\\\\\\\\\\C\\\\\\\\\\\\\\\\

// int minimumIndex(vector<int> &nums)
// {
//     int n = nums.size();
//     unordered_map<int, int> m;
//     unordered_map<int, int> m2;
//     for (int x : nums)
//     {
//         m[x]++;
//     }
//     int l1 = 0, l2 = n;
//     for (int i = 0; i < n; i++)
//     {
//         m2[nums[i]]++;
//         m[nums[i]]--;
//         l1++;
//         l2--;
//         if ((m2[nums[i]] * 2) > l1 and (m[nums[i]] * 2) > l2)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
int ans = INT_MIN;
int rec(vector<int> &nums, int mi, int ma, int i, int k)
{
    if (i >= nums.size())
    {
        return 0;
    }
    if (ma >= (nums[i] - k) or mi <= (nums[i] + k))
    {
        cout << ans << ":    " << nums[i] << ":n " << mi << ":" << (nums[i] - k) << ":mi " << ma << ":" << (nums[i] + k) << ":ma \n";

        // if(mi<=(nums[i]-k) and (nums[i]+k)<=ma){
        int inc = rec(nums, max(0, (max(mi, nums[i] - k))), min(ma, nums[i] + k), i + 1, k) + 1;
        int exc = rec(nums, mi, ma, i + 1, k);
        if (max(inc, exc) == 3)
        {
            // cout << "3 " << nums[i] << ":n " << mi << ":" << (nums[i] - k) << ":mi " << ma << ":" << (nums[i] + k) << ":ma \n";
        }
        if (max(inc, exc) == 4)
        {
        }
        ans = max(ans, max(inc, exc));
        cout << ans << ":ans\n";
        return max(inc, exc);
    }
    else
    {
        ans = max(ans, rec(nums, mi, ma, i + 1, k));
        cout << ans << ":ans\n";
        return rec(nums, mi, ma, i + 1, k);
    }
}
int maximumBeauty(vector<int> &nums, int k)
{
    int ans=1;
    sort(nums.begin(),nums.end());
    int n = nums.size();
    for(int i=0;i<n;i++){
        int val=nums[i]+k+k;
        auto temp=upper_bound(nums.begin(),nums.end(),val)-nums.begin()-i;
        ans=max(ans,temp);
    }
    return ans;
    // return rec(nums, INT_MIN, INT_MAX, 0, k);
}

int main()
{
    vector<int> v = {4, 6, 1, 2};
    vector<char> vc = {};
    int n = 5;
    string s = "";
    cout << maximumBeauty(v, 2);
    // cout << minimumIndex(v);

    return 0;
}