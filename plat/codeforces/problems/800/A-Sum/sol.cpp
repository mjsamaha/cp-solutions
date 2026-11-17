
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

    int a, b, c;

    cin >> a >> b >> c;

    if (a + b == c || b + c == a || a + c == b) {
        yes();
    } else {
        no();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
}
