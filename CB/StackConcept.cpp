#include <iostream>
using namespace std;
#include <bits/stdc++.h>
template <typename T>

class Stack
{
private:
    vector<T> v;

public:
    bool empty()
    {
        return v.size() == 0;
    }
    void push(T d)
    {
        v.push_back(d);
        return;
    }
    void pop()
    {
        if (!empty())
        {
            v.pop_back();
        }
        return;
    }
    T top()
    {
        return v[v.size() - 1];
    }
}; 



int main()
{
    Stack<int> s;
    for (int i=1;i<6;i++){
        s.push(i*i);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}