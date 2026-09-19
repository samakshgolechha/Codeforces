#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int score = 0;
    vector<vector<char>> v(10, vector<char>(10));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> v[i][j];
        }
    }
    int d;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (v[i][j] == 'X') {
                d = min(min(i, j), min(9 - i, 9 - j));
                score += d + 1;
            }
        }
    }
    cout << score << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}