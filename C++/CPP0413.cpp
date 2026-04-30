#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int l = 0, r = n - 1;
    while (l <= r) {
        if (l == r) cout << v[l];
        else cout << v[r] << " " << v[l] << " ";
        l++;
        r--;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}