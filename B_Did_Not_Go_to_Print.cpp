#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            st.push(i + 1);
        else if (s[i] == '2') {
            if (!st.empty()) {
                st.pop();
                ans.push_back(i + 1);
            }
        } else
            continue;
    }

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto& i : ans) cout << i << " ";
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