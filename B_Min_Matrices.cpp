#include <iostream>
#include <vector>

using namespace std;

int ans(vector<vector<int>>& res, int n, int k) {
    if (n > k || k > 2 * n - 1) return -1;
    int s = 2 * n - k;

    for (int i = 0; i < n; i++) {
        if (i < s)
            res[i][i] = i + 1;
        else {
            int p = i - s + 1;
            res[i][i] = s + 2 * p;
        }
    }

    for (int i = s; i < n; i++) {
        int p = i - s + 1;
        res[i - 1][i] = s + 2 * p - 1;
    }

    int val = k + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (res[i][j] == 0)
                res[i][j] = val++;
        }
    }

    return 0;
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> res(n, vector<int>(n, 0));
        if (ans(res, n, k) == -1)
            cout << -1 << endl;
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << res[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}