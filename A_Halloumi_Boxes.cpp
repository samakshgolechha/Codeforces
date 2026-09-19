#include <iostream>
#include <vector>

using namespace std;

bool isSorted(vector<int>& nums) {
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] > nums[i]) return false;
    }
    return true;
}

bool halloumiBoxes(vector<int>& nums, int n, int k) {
    if (k == 1) {
        if (isSorted(nums) == false) return false;
        return true;
    }
    return true;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            nums[i] = num;
        }
        bool ans = halloumiBoxes(nums, n, k);
        if (ans == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}