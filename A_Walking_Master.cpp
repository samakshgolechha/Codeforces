
#include <iostream>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b) {
        cout << -1 << "\n";
        return;
    } else {
        int moves = d - b;
        a += moves;
        if (a < c) {
            cout << -1 << "\n";
            return;
        } else {
            moves += a - c;
            cout << moves << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}