#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int res = n % 9;
    if (res == 0) res = 9;
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