

#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    bool check = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int gc = gcd(nums[i], nums[j]);
            if (gc <= 2) check = true;
        }
    }
    if (check == true)
        cout << "Yes";
    else
        cout << "No";
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