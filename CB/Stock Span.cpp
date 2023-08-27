#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void stockSpan(int price[], int n, int span[])
{
    stack<int> s;
    s.push(0);
    span[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == 0 and price[i] >= price[s.top()])
        {
            s.pop();
        }
        if (!s.empty())
        {
            span[i] = i - s.top();
        }
        else
        {
            span[i] = i + 1;
        }
        s.push(i);
    }
}

// int main()
// {
//     int price[] = {100, 80, 60, 70, 60, 75, 85};
//     int n = 7;
//     int span[n] = {0};
//     stockSpan(price, n, span);
//     for (auto x : span)
//     {
//         cout << x << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

vector<int> calculateSpan(int price[], int n)
{
    stack<pair<int, int>> pi;
    vector<int> span(n);
    pi.push({price[0], 0});
    span[0] = 1;
    for (int i = 1; i < n; i++)
    {
        while (!pi.empty() and pi.top().first <= price[i])
        {
            pi.pop();
        }
        if (pi.empty())
        {
            span[i] = i + 1;
        }
        else
        {
            span[i] = i - pi.top().second;
        }
        pi.push({price[i], i});

        return span;
    }

    int main()
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        calculateSpan(a, n);
        return 0;
    }