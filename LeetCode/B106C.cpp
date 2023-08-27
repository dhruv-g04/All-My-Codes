#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int sumDistance(vector<int> &nums, string s, int d)
{
    for(int i=0;i<d;i++){
        for(int j=0;j<nums.size();j++){
            if(s[i]=='R'){
                nums[i]++;
            }
            else{
                nums[i]--;
            }
        }
    }
    
}

int main()
{
    // cout<<;

    return 0;
}