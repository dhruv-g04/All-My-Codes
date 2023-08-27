// Code By Dhruv
// Please Don't stalk me :)

#include <bits/stdc++.h>
#include <climits> //INT_MAX and INT_MIN
#include <cmath>   //
#include <map>     //
#include <string>
#include <array>
#include <cstring>
#include <vector>
#include <set>
#include <tuple>
#include <cstdio>
#include <complex>

using namespace std;

#define int long long
#define pb push_back
#define input_vector(v) \
    for (auto &i : v)   \
        cin >> i;
#define for_inc(i, a, b) for (ll i = a; i < b; i++)
#define for_dec(i, a, b) for (ll i = a - 1; i >= b; i--)
#define PrintArray(a) \
    for (auto i : a)  \
        cout << i;

bool compare_a(int a, int b)
{
    return a < b;
}
bool compare_d(int a, int b)
{
    return a > b;
}
const long long inf = 1e18;
const int M = 1e9 + 7;

void solve()
{
    int n;
    // cin >> n;
    int ax,ay,bx,by,cx,cy,c=0;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    int corc,corb;
    // cout<<ax<<ay<<bx<<by<<cx<<cy<<endl;
    //for bob
    // if(bx>=ax and by>=ay){
    //     corb=1; 
    // }
    // else if(bx>=ax and by<=ay){
    //     corb=4; 
    // }
    // else if(bx<=ax and by>=ay){
    //     corb=2; 
    // }
    // else if(bx<=ax and by<=ay){
    //     corb=3; 
    // }
    // // cout << endl;
    // if(cx>=ax and cy>=ay){
    //     corc=1; 
    // }
    // else if(cx>=ax and cy<=ay){
    //     corc=4; 
    // }
    // else if(cx<=ax and cy>=ay){
    //     corc=2; 
    // }
    // else if(cx<=ax and cy<=ay){
    //     corc=3; 
    // }
    // if(corc==corb){
    //     c+=abs(min(cx,bx)-ax)+1;
    //     c+=abs(min(cy,by)-ay);
    //     cout<<c<<endl;
    //     return;
    // }
    // if(corb==1 an)
    int mx;
    if(abs(bx)<abs(cx)){
        mx=bx;
    }
    else{
        mx=cx;
    }
    // int Mx=max(bx,cx);
    int my;
    // int My=max(by,cy);
    if(abs(by)<abs(cy)){
        my=by;
    }
    else{
        my=cy;
    }
    // if(Mx-mx-ax>0)
    //     c+=Mx-mx-ax;
    // if(My-my-ay>0)
    //     c+=Mx-mx-ax;
    // c++;
    // ax=abs(ax);
    // ay=abs(ay);
    // int sx=
    // cout<<ax<<ay<<bx<<by<<cx<<cy<<endl;
    if(bx>ax and cx>ax){
        // mx=min(abs(mx),abs(Mx));
        c+=abs(ax-mx);
    }
    else if(bx<ax and cx<ax){
        // mx=min(abs(mx),abs(Mx));
        // cout<<"sdf";
        c+=abs(ax-mx);
    }
    c++;
    if(by>ay and cy>ay){
        // my=min(abs(my),abs(My));
        c+=abs(ay-my);
    }
    else if(by<ay and cy<ay){
        // my=min(abs(my),abs(My));
        c+=abs(ay-my);
    }
    cout <<c<< endl;
    return;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
