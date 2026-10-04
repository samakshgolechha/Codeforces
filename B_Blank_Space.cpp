// #include <bits/stdc++.h>

#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int cnt = 0, maxi = 0;
    for (int& i : nums) {
        if (i == 0) {
            cnt++;
            maxi = max(maxi, cnt);
        } else
            cnt = 0;
    }
    cout << maxi << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}