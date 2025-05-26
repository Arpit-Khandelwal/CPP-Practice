
#include <bits/stdc++.h>

using namespace std;
void solve() {
    string s;
    cin >> s;
    int n = stoi(s);
    // Check if n is a perfect square
    int root = sqrt(n);
    if (root * root != n) {
        cout << -1 << endl;
        return;
    }
// do n/2 and return two nearest integers
    int a = root / 2;
    int b = root - a;
    // Check if a and b are non-negative integers
    if (a < 0 || b < 0) {
        cout << -1 << endl;
    } else {
        cout << a << " " << b << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}