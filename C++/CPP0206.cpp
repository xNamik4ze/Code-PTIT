#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > res) res = A[i];
    }
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}