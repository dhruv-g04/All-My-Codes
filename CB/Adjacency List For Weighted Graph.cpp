#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    list<pair<int, int>> *l;
    int v;
    cin >> v;
    l = new list<pair<int, int>>[v];
    int e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y, d;
        cin >> x >> y >> d;
        l[x].push_back(make_pair(y, d));
        l[y].push_back(make_pair(x, d));
    }
    for (int i = 0; i < e; i++)
    {
        cout << i << "th Linked list: ";
        for (auto xp : l[i])
        {
            cout << " (" << xp.first << "," << xp.second << ") ";
        }
        cout << endl;
    }
    return 0;
}