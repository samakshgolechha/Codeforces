#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int b;
    cin >> b;

    if (b == 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}