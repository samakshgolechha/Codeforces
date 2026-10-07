

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<long long> v(n - 4);
    for (int i = 0; i < n - 4; i++)
        v[i] = nums[i] + nums[i + 2] - nums[i + 4];

    long long ans = 0;
    unordered_map<long long, long long> mp;

    for (int i = 0; i < n - 4; i++) {
        ans += mp[v[i]];
        mp[v[i]]++;
    }

    for (int i = 0; i < n - 4; i++) {
        if (i + 2 < n - 4 && v[i] == v[i + 2])
            ans--;

        if (i + 4 < n - 4 && v[i] == v[i + 4])
            ans--;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}