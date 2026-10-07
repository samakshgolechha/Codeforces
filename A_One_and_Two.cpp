// #include <bits/stdc++.h>

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    vector<int> prefix(n, 0);
    if (nums[0] == 2) prefix[0] = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == 2)
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }

    int ans = -1;
    for (int i = 0; i < n; i++)
        if (prefix[i] == prefix[n - 1] - prefix[i]) {
            ans = i + 1;
            break;
        }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}