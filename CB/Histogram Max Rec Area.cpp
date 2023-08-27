#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lrhv(vector<int> v)
{
    stack<pair<int, int>> s; // ind , heigth
    int l = v.size();
    int maxarea = 0;
    for (int i = 0; i < l; i++)
    {
        int start = i;
        // cout << i << " i ";
        while (!s.empty() and v[i] < s.top().second)
        {
            // int area = s.top().second * (i - s.top().first));
            maxarea = max(maxarea, s.top().second * (i - s.top().first));
            start = s.top().first;
            s.pop();
            // cout << area <<endl ;
        }
        s.push({start, v[i]});
    }
    while (!s.empty())
    {
        // int area = s.top().second * (l - s.top().first);
        maxarea = max(maxarea, s.top().second * (l - s.top().first));
        s.pop();
    }
    // cout << endl;
    return maxarea;
}

long long lrh(long long v[], int n)
{
    stack<pair<int, int>> s; // ind , heigth
    int l = n;
    long long maxarea = 0;
    for (int i = 0; i < l; i++)
    {
        long long start = i;
        // cout << i << " i ";
        while (!s.empty() and v[i] < s.top().second)
        {
            long long area = s.top().second * (i - s.top().first);
            maxarea = max(maxarea, area);
            start = s.top().first;
            s.pop();
            // cout << area <<endl ;
        }
        s.push({start, v[i]});
    }
    while (!s.empty())
    {
        long long area = s.top().second * (l - s.top().first);
        maxarea = max(maxarea, area);
        s.pop();
    }
    // cout << endl;
    return maxarea;
}

int main()
{
    // cout << "dfvfd0";
    long long arr[]={5,4,3,2,1};
    cout << lrh(arr,3);

    return 0;
}