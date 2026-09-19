#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int n;
        cin >> n;
        if (n % 3 == 0)
            cout << "Second";
        else
            cout << "First";
        cout << endl;
    }
}