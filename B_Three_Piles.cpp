#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long s1 = abs(a + c - b), s2 = abs(a - b);
    if (s1 > s2)
        cout << s1 << "\n";
    else
        cout << s2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}