#include <bits/stdc++.h>

using namespace std;

#define taktak(v) for (auto &i: v) cin >> i

void solve()
{
    int n, oneA = 0, oneB = 0;
    cin >> n;
    vector<int> a(n), b(n);
    // taktak(a); taktak(b);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            oneA++;
        }
    }
    // cout << oneA<<" A\n";
    // vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        // cout<<"dfsdf\n";
        cin >> b[i];
        // cout<<b[i]<<" b ele\n";
        // cout<<a[i]<<" a ele\n";
        if (b[i] == 1)
        {
            oneB++;
        }
        // cout << oneB << " B" << endl;
        // cout << oneA << " " << oneB << endl;

        // 1 0 0
        // 1 0 1

        // cout << a[i] << " " << b[i] << endl;
        if ((b[i] == 0) and (a[i] == 1))
        {
            for (int j=i+1;j<n;j++){
                int waste;
                cin>>waste;
            }
            cout << "NO\n";
            return;
        }
    }
    // cout << oneA << " " << oneB << endl;
    if ((oneA == 0) and (oneB != 0))
    {
        cout<<"NO\n";
        return ;
    }
    cout<<"YES\n";
}

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
