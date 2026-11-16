#include <iostream>

using namespace std;

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << '\n'
#else
#define dbg(x)
#endif

void yes() { cout << "yes" << '\n'; }

void no() { cout << "no" << '\n'; }

void solve() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d) {
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
