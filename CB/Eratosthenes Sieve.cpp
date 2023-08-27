#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int eratosthenesSieve(int n)
{
    vector<int> v(n + 1, 0);
    for (int k = 2; k < n; k++)
    {
        if (v[k] == 1)
        {
            continue;
        }
        int i = k * k;
        while (i <= n)
        {
            v[i] = 1;
            i = i + k;
        }
    }
    int c = 0;
    for (int i = 2; i < n + 1; i++)
    {
        if (v[i] == 0)
        {
            c++;
            cout << i << " ";
        }
    }
    cout << endl;
    return c;
}

int main()
{
    cout << eratosthenesSieve(17);

    return 0;
}