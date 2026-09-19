#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> d(n + 1, 0);
    for (int k = 1; k <= n; k++) {
        long long l = 1LL * a[k - 1] * k;
        long long r = 1LL * (a[k - 1] + 1) * k - 1;
        if (l < n) {
            int right = min((long long)n - 1, r);
            d[l]++;
            d[right + 1]--;
        }
    }
    vector<int> b;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        cur += d[i];
        if (cur == 0) {
            b.push_back(i);
        }
    }
    cout << b.size() << "\n";
    for (int i = 0; i < (int)b.size(); i++) {
        cout << b[i] << (i + 1 == (int)b.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}