#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> nums;

    if (x == 1) {
        if ((k < 3 && (n & 1)) || k == 1)
            cout << "NO" << "\n";
        else if (n & 1) {
            cout << "YES" << "\n";
            int count = (n - 3) / 2;
            cout << count + 1 << "\n";
            cout << 3 << " ";
            while (count--) cout << 2 << " ";
            cout << endl;
        } else if (!(n & 1)) {
            cout << "YES" << "\n";
            int cn = n / 2;
            cout << cn << "\n";
            while (cn--) cout << 2 << " ";
            cout << endl;
        }
    } else {
        cout << "YES" << "\n";
        cout << n << "\n";
        while (n--) cout << 1 << " ";
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}