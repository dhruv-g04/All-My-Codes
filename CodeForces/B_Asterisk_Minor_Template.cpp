// author: arnavwinner
 
#include <iostream>
#include <cstdio>
#include <tuple>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
 
using namespace std;
 
// dont forget precision errors
// ----------------- Values ----------------------------
const long long inf = 1e18;
 
const int M = 1e9 + 7; // * * change for modular calculations * *
 
int dx[] = {1, 1, -1, -1, 0, 0, 1, 1};
int dy[] = {1, -1, 1, -1, 0, 1, 0, 1};
 
// ----------------- definitions begin -----------------
#define pb push_back
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define ml map<ll, ll>
#define uml unordered_map<ll, ll>
#define taktak(v) for (auto &i: v) cin >> i;
#define repi(i, a, b) for (ll i = a; i < b; i++)
#define repid(i, a, b) for (ll i = a; i >= b; i--)
#define rep(a, b) for (ll i = a; i < b; i++)
#define repd(a, b) for (ll i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
 
// ------------------- definitions end ----------------
 
// ------------------- competitive websites -----------
void google(ll i) {cout << "Case #" << i << ": ";}
 
 
 
// -------------------------- Main Code Begins -----------------------------------
 
 
void presolve() {}
 
void solve() {
    string a, b;
    cin >> a >> b;
    if (a[0] == b[0]) {
        cout << "YES\n";
        cout << a[0] << '*' << '\n';
        return;
    }
    else if (a.back() == b.back()) {
        cout << "YES\n";
        cout << '*' << b.back() << '\n';
        return;
    }
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = 0; j < b.size() - 1; j++) {
            if (a[i] == b[j] && a[i + 1] == b[j + 1]) {
                cout << "YES\n";
                cout << '*' << a[i] << a[i + 1] << '*' << '\n';
                return;
            }
        }
    }
    cout << "NO\n";
}
 
int main() {
 
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
 
    ios::sync_with_stdio(false); 
    cin.tie(0);
 
    presolve();
    int T = 1;
    // ll I = 1;
    cin >> T;
    while (T--) {
        // cout << fixed << setprecision(20);
        // google(I);
        solve();
        // ++I;
    }
    return 0;
}