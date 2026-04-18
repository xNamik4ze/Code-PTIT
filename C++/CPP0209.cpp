#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> A(n);
    cin >> A[0];
    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        A[i] = A[i-1] + num;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        if (l == 1) cout << A[r-1] << endl;
        else cout << A[r-1] - A[l-2] << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}