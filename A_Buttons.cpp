#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == b) {
        if (c & 1)
            cout << "First" << "\n";
        else
            cout << "Second" << "\n";
    }

    else if (a > b)
        cout << "First" << "\n";
    else
        cout << "Second" << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}