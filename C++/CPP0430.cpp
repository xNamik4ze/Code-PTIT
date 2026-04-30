#include <iostream>
#include <set>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> s;
    int min_val = INT_MAX, max_val = INT_MIN;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        s.insert(num);
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    int res = max_val - min_val + 1 - s.size();
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}