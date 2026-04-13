#include <iostream>

using namespace std;

void solve() {
    long long res = 0;
    long long cur = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cur *= i;
        res += cur;
    }
    cout << res;
}

int main() {
    solve();
    return 0;
}