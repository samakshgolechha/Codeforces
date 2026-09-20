#include <iostream>
#include <vector>

using namespace std;



int main() {
    int a;
    cin >> a;
    while (a--) {
        int n;
        cin >> n;

        int cnt1 = 0, cnt = 0;
        while (n--) {
            int b;
            cin >> b;
            if (b == 1)
                cnt1++;
            else
                cnt++;
        }
        if (cnt1 >= cnt)
            cout << "Bessie";
        else
            cout << "Elsie";
        cout << endl;
    }
}