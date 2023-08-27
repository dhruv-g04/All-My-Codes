#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int minLength(string str)
{
    int l = str.length();
    int a = 0, b = 0, c = 0, d = 0, ans = l;
    bool ab = false, cd = false;
    stack<char> s;
    bool flag=0;
    for (auto x : str)
    {
        
        if (x == 'A' or x=='C' )
        {
            s.push(x);
            // flag=1;
        }
        else if (x == 'B')
        {
            if (s.empty()){
                return false;
            }
            // cout<<x<<" "<<s.empty()<<endl;
            if (s.top()!='A'){
                return false;
            }
            s.pop();
        }
        else if (x == 'D')
        {
            // cout<<x<<" hi "<<s.empty()<<endl;
            if (s.empty()){
                return false;
            }
            if (s.top()!='C'){
                // cout<<"hi\n";
                return false;
            }
            // cout<<"no\n";
            s.pop();
        }
        
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    int x = minLength(s);
    cout << x;
    return 0;
}