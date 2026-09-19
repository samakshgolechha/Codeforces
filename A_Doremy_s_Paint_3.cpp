#include <iostream>
#include <set>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    set<int> st;
    for (int i : nums) st.insert(i);
    if (st.size() == 1)
        cout << "YES" << "\n";
    else if (st.size() == 2) {
        int first = *st.begin(), second = *next(st.begin()),
            cnt1 = 0, cnt2 = 0;
        for (int i : nums) {
            if (i == first)
                cnt1++;
            else
                cnt2++;
        }
        if (n & 1 && abs(cnt1 - cnt2) == 1)
            cout << "YES" << "\n";
        else if (!(n & 1) && cnt1 == (n / 2))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    } else
        cout << "NO" << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}