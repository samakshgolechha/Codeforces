#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s[0] == '1') {
        int count = 0;
        for (char c : s) {
            if (c == '0') count++;
        }
        cout << count << "\n";
        return;
    }
    int p = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            p = i + 1;
            break;
        }
    }

    if (p == -1) {
        cout << 0 << "\n";
        return;
    }
    vector<int> P(n + 1, 0);
    for (int i = 0; i < n; i++) {
        P[i + 1] = P[i] + (s[i] == '1');
    }

    int total = P[n];
    int mini = n + 1;

    for (int k = p - 1; k <= n; k++) {
        int cost = 2 * P[k] - k + n - total;
        mini = min(mini, cost);
    }

    cout << mini << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}