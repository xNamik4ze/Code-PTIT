#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > k) break;
        for (int j = i + 1; j < n; j++) {
            int temp = v[i] + v[j];
            if (temp > k) break;
            else if (temp == k) res++;
        }
    }

    cout  << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}