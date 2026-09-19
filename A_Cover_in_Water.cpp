#include <iostream>
#include <string>
using namespace std;

int cover_in_water(string& s, int n) {
    int cont = 0, total = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            cont++;
            total++;
            maxi = max(maxi, cont);
        } else {
            if (cont) {
                cont = 0;
            }
        }
    }
    return (maxi >= 3 ? 2 : total);
}

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << cover_in_water(s, n) << endl;
    }
    return 0;
}