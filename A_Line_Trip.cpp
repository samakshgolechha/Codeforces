#include <iostream>
#include <vector>

using namespace std;

int lineTrip(vector<int>& nums, int x) {
    int maxi = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++) {
        int cost = nums[i] - nums[i - 1];
        maxi = max(maxi, cost);
    }
    int final_cost = 2 * (x - nums[n - 1]);
    if (maxi < final_cost) return final_cost;
    return maxi;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            nums[i] = num;
        }
        cout << lineTrip(nums, x) << endl;
    }
    return 0;
}