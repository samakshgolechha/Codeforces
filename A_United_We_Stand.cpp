#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    bool check = false;
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) check = true;
    }
    if (check == false || n == 1) {
        cout << -1 << "\n";
        return;
    }

    vector<int> b, c;
    sort(nums.begin(), nums.end());
    int a = nums[0];
    for (const auto& i : nums) {
        if (i == a)
            b.push_back(i);
        else
            c.push_back(i);
    }

    cout << b.size() << " " << c.size() << "\n";
    for (const auto& i : b) cout << i << " ";
    cout << "\n";

    for (const auto& i : c) cout << i << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}