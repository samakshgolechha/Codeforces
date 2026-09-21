#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int maxi = *max_element(nums.begin(), nums.end());
    for (auto& i : nums) {
        i = maxi + 1 - i;
    }
    for (int i : nums) cout << i << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}