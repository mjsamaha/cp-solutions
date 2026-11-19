/**
 * Author:  lobsterchops
 * Created: __DATETIME__
 */
#include <bits/stdc++.h>
using namespace std;

void YES() { cout << "YES\n"; }
void NO() { cout << "NO\n"; }

void solve() {

    string word;

    cin >> word;

    word[0] = toupper(word[0]);

    cout << word << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
