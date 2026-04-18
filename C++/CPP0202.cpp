#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A, A + n);

    int res = INT_MAX;
    for (int i = 0; i < n - 1; i++) res = min(res, A[i+1] - A[i]);

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}