#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    bool seen[n + 1];
    fill(seen, seen + n + 1, false);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if  (num > 0 && num <= n) seen[num] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!seen[i]) {
            cout << i << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}