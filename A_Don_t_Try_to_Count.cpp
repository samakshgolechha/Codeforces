#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    int cnt = 0;
    while (x.size() < m) {
        x += x;
        cnt++;
    }
    if (x.find(s) != string::npos) {
        cout << cnt << "\n";
        return;
    }
    x += x;
    cnt++;

    if (x.find(s) != string::npos)
        cout << cnt << "\n";
    else
        cout << -1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
