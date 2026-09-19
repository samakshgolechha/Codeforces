#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int>& nums, int n) {
    int mini = 1e9;
    for (const auto& i : nums) {
        if (i == 0) {
            cout << 0;
            return;
        }
        mini = min(mini, abs(i));
    }
    cout << abs(mini);
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    solve(nums, n);
}
