#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int distanceTraveled(int mainTank, int additionalTank)
{
    int n = mainTank;
    int c = n;
    while (n >= 5)
    {
        int left = n % 5;
        int take = n / 5;
        c += min(max(0,additionalTank), take);
        // cout<<c<<":c\n";
        n = left + min(additionalTank, take);
        additionalTank -= take;
    }
    return c * 10;
}

int main()
{
    cout << distanceTraveled(14, 1);

    return 0;
}