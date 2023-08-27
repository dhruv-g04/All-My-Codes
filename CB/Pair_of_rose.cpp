#include <bits/stdc++.h>

using namespace std;
int l,r;
void targetSum(int arr[], int n, int target)
{

    int left = 0;
    int right = n - 1;
    while (left < right)
    {
    
        int sum = arr[left] + arr[right];
        if (sum > target)
        {
            right--;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            
            l=left;
            r=right;
            left++;
            right--;
            // return;
        }
        // cout << arr[left] << " and " << arr[right] << endl;
    }
    cout << "Deepak should buy roses whose prices are " << arr[l] << " and " << arr[r] <<"."<< endl;
}
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        t--;
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int x;
        cin >> x;
        // PrintArray(arr);
        // cout<<x;
        targetSum(arr, n, x);
        
        cin.ignore();
    }
    return 0;
}
