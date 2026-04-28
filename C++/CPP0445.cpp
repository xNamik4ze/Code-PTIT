#include <iostream>
#include <climits>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2 && num != min1) min2 = num;
    }

    if (min2 ==  INT_MAX) cout << -1 << endl;
    else cout << min1 << " " << min2 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}