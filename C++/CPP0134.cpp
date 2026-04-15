#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            count++;
            n /= i;
            if (count == k) {
                cout << i << endl;
                return;
            }
        }
    }
    if (n > 1 && count + 1 == k) {
        cout << n << endl;
        return;
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}