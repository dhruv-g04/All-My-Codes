// #include <bits/stdc++.h>
#include<iostream>
#include <list>
using namespace std;

int main(){
    list<int> l1{7,3,5,1,4,2,7,9,32,5,5};
    list<string> l2{"Apple","Banana"};
    l1.push_back(6);
    l1.push_front(0);
    l2.push_back("Zebra");
    l2.push_front("Lion");
    l1.sort();
    l2.sort();
    for (auto x: l1){
        cout<<x<<" ";
    }
    cout<<endl;
    l1.reverse();
    for (auto x: l1){
        cout<<x<<" ";
    }
    cout<<endl;
    for (auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    string s;
    cin>>s;
    l2.remove(s);
    for (auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it=l2.begin();
    it++;
    it++;
    // l2.erase(it);
    l2.insert(it,"Grapes");
    for (auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}