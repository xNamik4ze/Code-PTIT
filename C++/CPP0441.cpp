#include <iostream>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int first_pos = -1; 
    bool found = false;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num == x && !found) {
            first_pos = i + 1;
            found = true;
        }
    }
    cout << first_pos << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) solve();
    return 0;
}