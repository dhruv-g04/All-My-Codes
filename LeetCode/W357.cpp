#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\A\\\\\\\\/
void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
string finalString(string s)
{
    string str = "";
    for (auto x : s)
    {
        if (x == 'i')
        {
            reverseStr(str);
        }
        else
        {
            str = str + x;
        }
    }
    return str;
}

// \\\\\\\\\\\\\\\B\\\\\\\\/
bool canSplitArrayt(vector<int> &nums, int m)
{
    int i = 0, n = nums.size(), j = n - 1;
    int sum = 0;
    for (auto x : nums)
    {
        sum += x;
    }
    while (j > i)
    {
        if (j - i == 1)
        {
            return true;
        }
        if (sum >= m)
        {
            if (nums[i] < nums[j])
            {
                sum -= nums[i];
                i++;
            }
            else
            {
                sum -= nums[j];
                j--;
            }
        }

        if (sum < m)
        {
            break;
        }
        // if(j-i==1){
        //     return true;
        // }
    }
    if (i == j)
    {
        return true;
    }
    return false;
}
// bool isSubarray(vector<int> &nums, int m)
// {
//     int n = nums.size();
//     if (n < 3)
//         return true;
//     if (nums[n - 1] + nums[n - 2] >= m)
//         return true;
//     if (nums[0] + nums[1] >= m)
//         return true;
//     int sum = 0;
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (nums[i] + nums[i + 1] >= m)
//             return true;
//     }
//     return false;
// }
bool canSplitArray(vector<int> &nums, int m)
{
    int n = nums.size();
    if (n < 3)
        return true;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] + nums[i - 1] >= m)
            return true;
    }
    return false;
}

// \\\\\\\\\\\\\\\C\\\\\\\\/

int main()
{
    vector<char> vc = {};
    vector<int> v = {4, 1, 3, 2, 4};
    vector<int> v2 = {1, 1};
    int n = 5;
    // [4, 1, 3, 2, 4]
    // 6
    cout << canSplitArray(v2, 6);

    return 0;
}