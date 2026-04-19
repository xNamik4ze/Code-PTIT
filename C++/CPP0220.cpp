#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int m = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int digit;
            cin >> digit;
            if (i == 0 || j == 0 || i == m || j == m) cout << digit << " ";
            else cout << "  ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}