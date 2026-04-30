#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<bool> seen(10, false);
    int count = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (count < 10) {
            for (char c : s) {
                int digit = c - '0';
                if (!seen[digit]) {
                    seen[digit] = true;
                    count++;
                }
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (seen[i]) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}