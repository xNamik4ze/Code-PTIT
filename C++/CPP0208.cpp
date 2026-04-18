#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    sort(A.begin(), A.end());
    cout << A[k-1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}