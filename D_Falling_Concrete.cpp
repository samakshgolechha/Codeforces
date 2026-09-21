#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        nums[i] = num - (i + 1);
    }
    sort(nums.begin(), nums.end());
    int count = 1, ans = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1])
            continue;
        if (nums[i] == nums[i - 1] + 1)
            count++;
        else {
            count = 1;
        }
        ans = max(count, ans);
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}