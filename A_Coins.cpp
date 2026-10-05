#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    if (k == 1 || !(n & 1) || !(n - k & 1))
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}