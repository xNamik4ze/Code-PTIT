#include <iostream>

using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        int dif = (int)s[i] - (int)s[i+1];
        if (dif != -1 && dif != 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}