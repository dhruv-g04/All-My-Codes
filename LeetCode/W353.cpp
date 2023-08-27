#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\A///////////////

int theMaximumAchievableX(int num, int t)
{
    // num
}

// \\\\\\\\\\\\\\B///////////////
// int maximumJumps(vector<int> &nums, int target)
// {
//     int n=nums.size();
//     int diff=0;
//     int maxj=0;
//     int jump=0;
//     if(target==0){
//         return -1;
//     }
//     sort(nums.begin(),nums.end()-1);
//     // for(int x:nums){
//     //     cout<<x<<" ";
//     // }
//     for(int i=1;i<n;i++){
//         cout<<nums[i]<<":n ";
//         diff=nums[i]-nums[n-1];
//         if(diff==0){
//             return maxj+1;
//         }
//         else if(diff>target){
//             return maxj;
//             break;
//         }
//         if((nums[i]-nums[i-1])<=target){
//             jump++;
//             cout<<":ME ";
//             maxj=jump;
//         }
//         else{
//             return maxj;
//         }
//     }
//     return maxj;
// }
map<int, int> m;

int maxx = -1;
int rec(vector<int> &nums, int target, int i, vector<int> &dp)
{
    int n = nums.size();
    if (i == n - 1)
    {
        return 0;
    }
    if (i >= n)
    {
        return -1;
    }
    if (dp[i])
    {
        return dp[i];
    }
    int jump = -1;
    int mjump = -1;
    for (int j = i + 1; j < n; j++)
    {

        if (nums[i]-nums[j] <= target && nums[i]-nums[j] >= -target)
        {
            // m[j] = 1;
            // cout << i << ":i " << j << ":j ";
            int jump = rec(nums, target, j, dp);
            // cout << j << ":j " << jump << ":jump ";
            // m[j] = 0;
            mjump = max(jump, mjump);
        }
    }
    if (mjump == -1)
    {
        // cout << maxx << ":m ";
        dp[i] = -1;
        return -1;
    }
    maxx = max(mjump + 1, maxx);
    // cout << maxx << ":m ";
    dp[i] = maxx;
    return maxx;
}

int maximumJumps(vector<int> &nums, int target)
{
    int n = nums.size();
    if (target == 0)
    {
        return -1;
    }
    vector<int> dp(n, 0);
    m[0] = 1;
    rec(nums, target, 0, dp);
    return maxx;
}

// \\\\\\\\\\\\\\C///////////////
int maxNonDecreasingLength(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size();
    vector<int> v(2 * n);
    vector<int> ans(n);
    int i = 0;
    int j = 0;
    int minn = 0;
    if (nums1[i] < nums2[j])
    {
        minn = nums1[i++];
    }
    else
    {
        minn = nums2[j++];
    }
    int k = 0;
    ans[0] = (minn);
    for (int k = 1; k < n; k++)
    {
        if (nums1[i] < nums2[j])
        {
            minn = nums1[i++];
        }
        else
        {
            minn = nums2[j++];
        }
        ans[k]=minn;
    }

}
int main()
{
    // vector<int> v = {1,3,6,4,1,2};
    // vector<int> v = {0, 2, 1, 3};
    vector<int> v = {-533985778, -424626669, 794071124, 694501105, -651162637, -789411200, 773124493, -655591953, 205086705, -421668572};
    vector<char> vc = {};
    string s = "";
    int n = 5;
    cout << "";
    cout << maximumJumps(v, 3);
    // 1194793065
    return 0;
}