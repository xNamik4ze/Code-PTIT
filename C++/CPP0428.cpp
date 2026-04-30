#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n+m);
    for (int i = 0; i < n + m; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 0; i < n + m; i++) {
        cout << v[i];
        if (i < n + m - 1) cout << " ";
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