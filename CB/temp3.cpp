#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            // s=s;
            e = mid;
        }
        else
        {
            s = mid;
            // e=e;
        }
    }
    return -1;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v;
    int i = binarySearch(nums, target);
    cout<<i<<":i ";
    if (i == -1)
    {
        return {-1, -1};
    }
    int bi = i;
    int fi = i;
    while (nums[bi] == target)
    {
        bi--;
    }
    while (nums[fi] == target)
    {
        fi++;
    }
    v.push_back(bi + 1);
    v.push_back(fi - 1);
    return v;
}

int main(){
    vector<int> nums={5,7,7,8,8,10};
    int target=6;
    vector<int> v=searchRange(nums,target);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}