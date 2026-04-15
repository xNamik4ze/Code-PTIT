#include <iostream>

using namespace std;

void solve() {
    long long n, res;
    cin >> n;
    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            res = i;
        }
    }
    if (n > 1) res = n;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}