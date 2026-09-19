#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> temp = nums;
    sort(temp.begin(), temp.end());
    if (temp == nums) {
        cout << n << "\n";
        for (int& i : nums) cout << i << " ";
        cout << "\n";
        return;
    }

    int m = n;
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) ans.push_back(nums[i]);
        ans.push_back(nums[i]);
    }

    cout << ans.size() << "\n";
    for (const int& i : ans) cout << i << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}