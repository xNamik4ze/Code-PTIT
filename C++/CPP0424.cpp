#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int k, n;
    cin >> k >> n;
    vector<int> v(k*n);
    for (int i = 0; i < k * n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 0; i < k * n; i++) {
        cout << v[i];
        if (i < k * n - 1) cout << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}