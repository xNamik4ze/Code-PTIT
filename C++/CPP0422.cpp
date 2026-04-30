#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        if (num != 0) cout << num << " ";
        else count++;
    }

    for (int i = 0; i < count; i++) {
        cout << 0;
        if (i < count - 1) cout << " ";
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