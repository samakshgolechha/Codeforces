#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    int cnt1 = 0, cnt2 = 0, cnt = 0;
    for (const auto& i : nums) {
        if (i == -1)
            cnt1++;
        else
            cnt2++;
    }
    while ((cnt1 & 1) || (cnt1 > cnt2)) {
        cnt1--;
        cnt2++;
        cnt++;
    }
    cout << cnt << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}