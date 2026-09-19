#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    if (temp != nums) {
        cout << 0 << endl;
        return;
    }
    int mini = 1e9;
    for (int i = 1; i < n; i++) {
        int diff = nums[i] - nums[i - 1];
        mini = min(diff, mini);
    }

    int ans = (mini / 2) + 1;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
