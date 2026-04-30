#include <iostream>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == x && !found) {
            found = true;
        }
    }
    if (found) cout << 1 << "\n";
    else cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}