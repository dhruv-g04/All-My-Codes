#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longestSemiRepetitiveSubstring(string s)
{
    int c = 1;
    int maxc = 1;
    int afterflag = 0;
    bool flag = false;
    int i;
    // for (i = 1; i < s.size(); i++)
    // {
    //     if (s[i] == s[i - 1] and !flag)
    //     {
    //         flag = 1;
    //     }
    //     else if (s[i] == s[i - 1] and flag)
    //     {
    //         // cout<<i;
    //         if(i-2>=0 and s[i-2]==s[i]){
    //             c--;
    //         }
    //         cout<<c<<":"<<i<<endl;
    //         maxc = max(maxc, c);
    //         c = afterflag;
    //         flag = 1;
    //         afterflag = -1;
    //     }
    //     c++;
    //     if (flag)
    //     {
    //         afterflag++;
    //     }
    // }
    int ci=0;
    i=1;
    while(i<s.size()){
        if (s[i] == s[i - 1] and !flag)
        {
            flag = 1;
            ci=i;
            // cout<<"hi"<<endl;
        }
        else if (s[i] == s[i - 1] and flag)
        {
            // cout<<c<<":"<<ci<<"ci"<<endl;
            maxc = max(maxc, c);
            c = 0;
            flag = 0;
            i=ci;
        }
        c++;
        // cout<<c<<":"<<i<<endl;
        i++;
    }
    maxc = max(maxc, c);
    // cout<<c<<":"<<i<<endl;
    return maxc;
}

int main()
{
    cout << longestSemiRepetitiveSubstring("");
    // cout<<;

    return 0;
}