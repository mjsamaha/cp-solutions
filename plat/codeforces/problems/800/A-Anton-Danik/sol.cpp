
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << '\n'
#else
#define dbg(x)
#endif

void yes() { cout << "yes" << '\n'; }

void no() { cout << "no" << '\n'; }

void solve() {
    // solve

    int n;
    int acount = 0;
    int dcount = 0;

    cin >> n;

    string games;

    cin >> games;

    for (int i = 0; i < n; i++) {
        if (games[i] == 'A') {
            acount++;
        } else {
            dcount++;
        }
    }

    if (acount == dcount) {
        cout << "Friendship";
    } else if (acount > dcount) {
        cout << "Anton";
    } else {
        cout << "Danik";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int t; cin >> t; while (t--)
    solve();
}
