#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool balanceParenthsis(string str){
    stack<char> s;
    bool flag=0;
    for (auto x : str)
    {
        
        if (x == '(' or x=='{' or x=='[')
        {
            s.push(x);
            // flag=1;
        }
        else if (x == ')')
        {
            if (s.empty()){
                return false;
            }
            // cout<<x<<" "<<s.empty()<<endl;
            if (s.top()!='('){
                return false;
            }
            s.pop();
        }
        else if (x == '}')
        {
            // cout<<x<<" hi "<<s.empty()<<endl;
            if (s.empty()){
                return false;
            }
            if (s.top()!='{'){
                // cout<<"hi\n";
                return false;
            }
            // cout<<"no\n";
            s.pop();
        }
        else if (x == ']')
        {
            if (s.empty()){
                return false;
            }
            // cout<<x<<" "<<s.empty()<<endl;
            if (s.top()!='['){
                return false;
            }
            s.pop();
        }
    }
    if (s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    
    // stack<char> sc;
    // stack<char> ss;
    // stack<char> sc;
    string str = ")]}";
    
    if (balanceParenthsis(str))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}