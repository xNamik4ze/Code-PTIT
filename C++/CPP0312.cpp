#include <iostream>
#include <vector>

using namespace std;

void solve() {
    string s;
    int k;
    cin >> s >> k;
    if (s.length() < 26) {
        cout << 0 << endl;
    return;
    }
    vector<bool> seen(26, false);
    int count = 0;
    for (char c : s) {
        if (seen[c - 'a'] == false) {
            seen[c - 'a'] = true;
            count++;
        }
    }
    if (26 - count > k) cout << 0 << endl;
    else cout << 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}