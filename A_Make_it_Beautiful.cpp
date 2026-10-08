#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    bool check = false;
    for (int i = 0; i < n; i++) {
        if (nums[i] != nums[0]) check = true;
    }
    if (n != 1 && check == false) {
        cout << "NO" << "\n";
        return;
    }

    int i = max_element(nums.begin(), nums.end()) - nums.begin();
    swap(nums[i], nums[0]);

    cout << "YES" << "\n";
    for (auto& i : nums) cout << i << " ";
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