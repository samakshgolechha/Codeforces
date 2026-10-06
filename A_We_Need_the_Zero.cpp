#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int ans = nums[0];
    for (int i = 1; i < n; i++) ans ^= nums[i];
    if (n & 1)
        cout << ans << "\n";
    else {
        if (ans != 0)
            cout << -1 << "\n";
        else
            cout << 0 << "\n";
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