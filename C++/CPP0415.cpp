#include <iostream>
#include <climits>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num > max_val) max_val = num;
    }
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        if (num < min_val) min_val = num;
    }
    long long res = (long long)min_val * max_val;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}