#include <iostream>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;

    vector<array<long long, 3>> count(n);

    long long mini = 1e18;

    for (int i = 0; i < n; i++) {
        long long a, b, c;
        cin >> a >> b >> c;

        count[i] = {a, b, c};
        mini = min(mini, a + b + c);
    }

    auto can = [&](long long x) {
        long long need = 0;

        for (auto v : count) {
            long long a = v[0];
            long long b = v[1];
            long long c = v[2];

            long long s = a + b + c;

            if (s >= x)
                continue;

            if (a == b && b == c)
                return false;

            long long d = x - s;

            if (a <= b && b <= c) {
                long long z = 2 * min(b - a, c - b) + 3;
                need += z + d - 1;
            } else {
                need += d;
            }

            if (need > k)
                return false;
        }

        return true;
    };

    long long lo = mini;
    long long hi = mini + k;

    while (lo < hi) {
        long long mid = lo + (hi - lo + 1) / 2;

        if (can(mid))
            lo = mid;
        else
            hi = mid - 1;
    }

    cout << lo << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}