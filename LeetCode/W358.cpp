#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \\\\\\\\\\\\\\\A\\\\\\\\/
// int maxSum(vector<int> &nums)
//     // {
//     //     //     [84,91,18,59,27,9,81,33,17,58]
//     //     // Output:
//     //     // 150
//     //     // Expected:
//     //     // 165
//     //     int n = nums.size();
//     //     vector<pair<int, int>> v(n);
//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         int temp = 0;
//     //         int num = nums[i];
//     //         while (num)
//     //         {
//     //             temp = max(temp, num % 10);
//     //             num /= 10;
//     //         }
//     //         v[i] = {temp, i};
//     //     }
//     //     int ans = -1;
//     //     sort(v.begin(), v.end());
//     //     // for(auto x:v){
//     //     //     cout<<x.first<<":"<<x.second<<" ";
//     //     // }
//     //     cout << endl;
//     //     for (int i = 1; i < n; i++)
//     //     {
//     //         int j = i - 1;
//     //         while (j >= 0 and v[j].first == v[i].first)
//     //         {
//     //             // cout<<v[i - 1].second<<":"<<v[i].second<<" "<<nums[v[i - 1].second] + nums[v[i].second]<<endl;
//     //             ans = max(ans, nums[v[j].second] + nums[v[i].second]);
//     //             j--;
//     //         }
//     //     }
//     //     // cout<<ans;
//     //     return ans;
//     // }

//     // // \\\\\\\\\\\\\\\B\\\\\\\\/

//     // ListNode *doubleIt(ListNode *head)
//     // {
//     //     int num = 0;
//     //     // int mul=1;
//     //     ListNode *temp = head;
//     //     while (temp)
//     //     {
//     //         num *= 10;
//     //         num += (temp->val);
//     //         temp = temp->next;
//     //     }
//     //     num *= 2;
//     //     ListNode *newl = new ListNode(-1);
//     //     temp=newl;
//     //     while (num)
//     //     {
//     //         ListNode *t = new ListNode(num % 10);
//     //         temp->next=t;
//     //         temp=t;
//     //         num /= 10;
//     //     }
//     //     return reverseList(newl->next);
//     // }

//     ListNode *revList(ListNode *head)
// {

//     ListNode *prev = NULL;
//     ListNode *curr = head;

//     while (curr != NULL)
//     {
//         ListNode *forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }
// ListNode *twoLists(ListNode *first)
// {
//     // code here
//     first = revList(first);
//     second = revList(second);

//     int carry = 0;
//     ListNode *head = NULL, *prev = NULL;
//     ListNode *sum = NULL;
//     while (first != NULL or carry == 1)
//     {
//         int newVal = carry;
//         if (first)
//         {
//             newVal += first->val;
//             newVal += first->val;
//         }
//         carry = newVal / 10;
//         newVal = newVal % 10;
//         ListNode *newNode = new ListNode(newVal);
//         // newNode->val = newVal;
//         newNode->next = sum;
//         sum = newNode;

//         if (first)
//             first = first->next;
//     }

//     return sum;
// }
// ListNode *doubleIt(ListNode *head)
// {
//     return twoLists(head, head);
// }

// \\\\\\\\\\\\\\\C\\\\\\\\/

int minAbsoluteDifference(vector<int> &nums, int x)
{
    ios::sync_with_stdio(0); 
    cin.tie(0);              
    cout.tie(0);
    int i=0;
    int j=x;
    int n=nums.size();
    int minn=INT_MAX;
    while(i<n-x){
        int j=i+x;
        while(j<n){
            minn=min(minn,abs(nums[i]-nums[j]));
            j++;
        }
        i++;
    }
    return minn;
}

int main()
{
    vector<char> vc = {' ', 'a', 'b'};
    vector<string> vs = {"leetcode"};
    vector<int> v = {84, 91, 18, 59, 27, 9, 81, 33, 17, 58};
    vector<int> v2 = {1, 1};
    int n = 5;
    // cout << maxSum(v);

    return 0;
}