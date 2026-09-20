#include <iostream>
#include <vector>

using namespace std;
void solve() {
    int n, k;
    cin >> n >> k;
    if (n % k == 0) {
        cout << 2 << "\n"
             << n - 1 << " " << 1 << "\n";
    } else
        cout << 1 << "\n"
             << n << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}