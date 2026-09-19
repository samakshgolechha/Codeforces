#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

long long pillScore(vector<int>& nums, int n, int m) {
    priority_queue<int> pq;
    long long maxi = -1e18;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        if (pq.size() == m - 1) {
            long long score = 1LL * m * nums[i] - sum;
            maxi = max(maxi, score);
        }

        if (pq.size() < m - 1) {
            pq.push(nums[i]);
            sum += nums[i];
        } else if (!pq.empty() && nums[i] < pq.top()) {
            sum = sum - pq.top() + nums[i];
            pq.pop();
            pq.push(nums[i]);
        }
    }
    return maxi;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while (a--) {
        int n, m;
        cin >> n >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        cout << pillScore(nums, n, m) << "\n";
    }
    return 0;
}