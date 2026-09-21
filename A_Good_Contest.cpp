#include <iostream>
#include <vector>

using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> nums(3);
    for (int i = 0; i < 3; i++) cin >> nums[i];
    int mini = *min_element(nums.begin(), nums.end());
    int ans = n - mini;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}