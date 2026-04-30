#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<bool> seen(n, false);

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        if (num >= 0 && num < n)
            seen[num] = true;
    }

    for (int i = 0; i < n; i++) {
        if (seen[i]) cout << i;
        else cout << -1;
        if (i < n - 1) cout << " ";
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