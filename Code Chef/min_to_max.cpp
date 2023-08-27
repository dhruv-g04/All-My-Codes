#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN


using namespace std;


signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,min,c=0;
        min=INT_MAX;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i]<min){
                min=v[i];
                c=1;
            }
            else if (v[i]==min){
                c++;
            }
        }
        cout<<n-c<<endl;


    }
    return 0;
}
