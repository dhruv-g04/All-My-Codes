#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// int countBeautifulPairs(vector<int> &nums)
// {
//     int c = 0;
//     int n = nums.size();
//     vector<int> a(n);
//     vector<int> b(n);
//     for (int i = 0; i < n; i++)
//     {
//         b[i] = nums[i] % 10;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         while (nums[i] >= 10)
//         {
//             nums[i] = nums[i] / 10;
//         }
//         a[i] = nums[i];
//     }
//     // for(int x:a){
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl;
//     // for(int x:b){
//     //     cout<<x<<" ";
//     // }
//     // cout<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int m = min(a[i], b[j]);
//             int M = max(a[i], b[j]);

//             // cout<<a[i]<<":"<<b[j]<<endl;
//             // if(a[i]==1 and b[j]==1){
//             //     continue;
//             // }
//             if (m == 4 and (M == 6))
//             {
//                 continue;
//             }
//             if (m == 6 and M == 8)
//             {
//                 continue;
//             }
//             if (m == 6 and M == 9)
//             {
//                 continue;
//             }

//             if (a[i] == 1 or b[j] == 1)
//             {
//                 c++;
//                 // cout<<c<<endl;
//             }
//             else if (M % m != 0)
//             {
//                 c++;
//                 // cout<<c<<endl;
//             }
//         }
//     }
//     return c;
// }

// int tcountBeautifulPairs(vector<int> &nums)
// {
//     const int M = 1e9 + 7;
//     int c = 0;
//     int n = nums.size();
//     int M = *max_element(nums.begin(), nums.end());
//     int ans = 0;
//     for (int i = 2; i <= M; i++)
//     {
//         int c = 0;
//         for (int j = 0; j < n; j++)
//         {
//             cout << nums[j] << ":" << i << endl;
//             if (nums[j] % i == 0)
//             {
//                 c++;
//             }
//             else
//             {
//                 if (c > 1)
//                     ans += (c) * (c - 1) / 2;
//             }
//         }
//     }

//     return ans%M;
// }

// int numberOfGoodSubarraySplits(vector<int> &nums)
// {
//     int ans = 1;
//     bool flag = 0;
//     bool one = 0;
//     int c = 0;
//     int M = 1e9 + 7;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] == 1)
//         {
//             one = 1;
//         }
//         if (one)
//         {
//             if (nums[i] == 1)
//             {
//                 ans *= c + 1;
//                 ans=ans%M;
//                 c = 0;
//             }
//             else
//             {
//                 c++;
//             }
//         }
//     }
//     if (one == 0)
//     {
//         return 0;
//     }
//     return ans%M;
// }

vector<int> survivedRobotsHealths(vector<int> &p, vector<int> &h, string d)
{
    int n=p.size();
    vector<int> L;
    for(int i=n-1;i>=0;i--){
        if(d[i]=='L'){
            int ti=i;
            L.push_back(i);
            
            while (i>=0)
            {
                i--;
                if(d[i]=='L'){
                    L.push_back(i);
                }
                else if(d[i]=='R'){
                    for(int q=L.size()-1;)
                    if(h[i]<h[])
                }
            }
            
        }
    }
}

int main()
{
    // 31,25,72,79,74
    vector<int> v = {1};
    cout << numberOfGoodSubarraySplits(v);

    return 0;
}