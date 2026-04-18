#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    d = d % n;

    reverse(A.begin(), A.begin() + d);
    reverse(A.begin() + d, A.end());
    reverse(A.begin(), A.end());

    for (int i = 0; i < n; i++) cout << A[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}