#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums, int n) {
    int prev = n + 1;
    for (int i = 0; i < n; i++) {
        int curr = nums[i];
        if (i + 1 < curr) {
            if (nums[nums[i] - 1] != i + 1) return false;
            if (curr >= prev) return false;
            prev = curr;
        }
    }
    return true;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            int num;
            cin >> num;
            nums[i] = num;
        }

        if (check(nums, n) == true)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}