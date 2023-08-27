#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// \AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA/

int longestAlternatingSubarray(vector<int> &nums, int threshold)
{
    // nums[i-1]%2==1 and nums[i-1]<=threshold and
    // flag and nums[i-1]%2==0 and nums[i-1]<=threshold and
    int n = nums.size();
    int c = 0;
    int maxc = INT_MIN;
    bool flag = 0;
    bool evenl = 0;
    bool oddl = 0;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << "< ";
        if (flag == 0 and nums[i] % 2 == 0 and nums[i] <= threshold)
        {
            flag = 1;
            evenl = 1;
            oddl = 0;
            c++;
            cout << c << ":c ";
        }
        else if (flag and oddl == 1 and nums[i] <= threshold and nums[i] % 2 == 0)
        {
            c++;
            evenl = 1;
            oddl = 0;
            // cout<<c<<":c ";
        }
        else if (flag and evenl == 1 and nums[i] <= threshold and nums[i] % 2 == 1)
        {
            c++;
            oddl = 1;
            evenl = 0;
            // cout<<c<<":c ";
        }
        else
        {
            cout << c << ";c ";
            maxc = max(maxc, c);
            flag = 0;
            c = 0;
        }
    }
    cout << c << ":c ";
    maxc = max(maxc, c);
    // cout<<maxc;
    return maxc;
}

// \BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB/

bool isPrime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<vector<int>> v;
// map<int, bool> m;
void sieve_of_eratosthenes(int n)
{
    bool is_prime[n + 1];
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                is_prime[i] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i])
        {
            // cout << i << " ";
            // m[i] = 1;
            if (is_prime[n - i])
            {
                vector<int> temp = {i,n-i};
                v.push_back(temp);
                is_prime[i]=0;
            }
        }
    }
}
vector<vector<int>> findPrimePairs(int n)
{
    sieve_of_eratosthenes(n);
    return v;
}
// \CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC/

int main()
{
    // vector<int> v = {4, 3, 1};
    vector<vector<int>> v = findPrimePairs(1000000);
    for (auto x : v)
    {
        for (auto i : x)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}