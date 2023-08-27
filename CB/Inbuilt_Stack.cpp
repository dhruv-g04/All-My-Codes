#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// void recReverse(stack<int> &s, int n)
// {
//     stack<int> s2;
//     // while (n != 0)
//     // {
//     if (n == 0)
//     {
//         return;
//     }
//     int t = s.top();
//     s.pop();
//     // n = n - 1;
//     for (int i = 0; i < n; i++)
//     {
//         int temp = s.top();
//         s.pop();
//         s2.push(temp);
//     }
//     s.push(t);
//     for (int i = 0; i < n; i++)
//     {
//         int temp = s2.top();
//         s2.pop();
//         s.push(temp);
//     }
//     cout<<" hi \n";
//     recReverse(s, n - 1);
//     // }
//     return;
// }
void putatlast(stack<int> &s,int d){
    // cout<<"hi\n";
    if (s.empty()){
        s.push(d);
        return;
    }
    int x = s.top();
    s.pop();
    putatlast(s,d);
    s.push(x);
    // return;
}

void recReverse(stack<int> &s){
    // cout<<"hi\n";
    if (s.empty()){
        // s.push(x);
        return;
    }
    int x = s.top();
    s.pop();
    recReverse(s);
    putatlast(s,x);
    // return;
}

int main()
{
    stack<int> s;
    for (int i = 1; i < 6; i++)
    {
        s.push(i);
    }
    // cout<<"hi\n";
    // stack<int> s2;
    int n = s.size();
    // while (n != 0)
    // {

    //     int t = s.top();
    //     s.pop();
    //     n = n - 1;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int temp = s.top();
    //         s.pop();
    //         s2.push(temp);
    //     }
    //     s.push(t);
    //     for (int i = 0; i < n; i++)
    //     {
    //         int temp = s2.top();
    //         s2.pop();
    //         s.push(temp);
    //     }
    // }
    // recReverse(s,n-1);
    // cout<<"hi\n";
    recReverse(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    // while (!s2.empty())
    // {
    //     cout << s2.top() << " ";
    //     s2.pop();
    // }

    return 0;
}