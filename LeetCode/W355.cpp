#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//////////////A\/\\////

vector<string> splitWordsBySeparator(vector<string> &words, char separator)
{
    vector<string> ans;
    for (string s : words)
    {
        string temp = "";
        for (char x : s)
        {
            if (x != separator)
            {
                temp += x;
            }
            else
            {
                if (temp.size())
                    ans.push_back(temp);
                temp = "";
            }
        }
        if (temp.size())
            ans.push_back(temp);
    }
    return ans;
}

//////////////B\/\\////
long long maxn=INT_MIN;
long long rec(vector<int> &nums,int i,long long last){
    maxn=max(maxn,last);
    if(i==nums.size()){
        return 0;
    }
    long long inc=0;
    if(nums[i]>=last){
        inc=rec(nums,i+1,last+nums[i]);
    }
    long long exc=rec(nums,i+1,nums[i]);
    return max(inc,exc);
}
long long maxArrayValue(vector<int> &nums)
{
    long long maxn=0;
    int n=nums.size();
    if(n==1){
        return nums[0];
    }
    for(int i=n-2;i>=-1;i--){
        long long last=nums[i+1];

        for(int j=i-1;j>=0;j--){
            if(last>=nums[j])
                last+=nums[j];
            else{
                break;
            }
        }
        maxn=max(maxn,last);
    }
    return maxn;
}

//////////////C\/\\////

//////////////D\/\\////

// \/\\\/\//\/\/\/\/\/

int main()
{
    vector<char> vc = {};
    vector<int> v = {2,3,7,9,3};
    vector<int> v2 = {91,50};
    int n = 5;
    string s = "l";
    cout << maxArrayValue(v);

    return 0;
}