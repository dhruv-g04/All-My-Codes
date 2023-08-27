

// author: arnavwinner

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define mii map<int, int>
#define pii pair<int, int>
#define F0R(i, a, b) for (int i = a; i < b; i++)
#define FOR(i, b) F0R(i, 0, b)
#define all(x) x.begin(), x.end()
#define taktak(v) for (auto &i: v) cin >> i;
#define pb push_back

const int M = 1E9 + 7;
const string vowels = "aeiou";

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 1;
    int cnt = 0;
    int other_cnt = 0;
    bool start_checking = false;
    FOR(i, n) {
        bool found = false;
        FOR(j, 5) {
            if (s[i] == vowels[j]) {
                found = true;
            }
        }
        if (start_checking) {
            if (found) {
                start_checking = false;
                ans *= (other_cnt + 1);
                ans %= M;
            }
            else {
                other_cnt++;
            }
        }
        if (found) {
            cnt++;
        }
        if (cnt == k) {
            start_checking = true;
            cnt = 0;
            other_cnt = 0;
        }
    }
    // ans *= (other_cnt + 1);
    // ans %= M;
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
