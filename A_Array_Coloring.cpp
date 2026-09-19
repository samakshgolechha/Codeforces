#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    int odd = 0, even = 0;
    for (int i : nums) {
        if (i & 1)
            odd++;
        else
            even++;
    }
    if (odd & 1)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}