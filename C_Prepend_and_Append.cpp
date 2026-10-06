#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (s == "") cout << 0 << "\n";
    int ans = 0, i = 0, j = n - 1;
    while (i <= j) {
        if (s[i] ^ s[j]) {
            i++;
            j--;
            continue;
        } else {
            ans = j - i + 1;
            break;
        }
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}