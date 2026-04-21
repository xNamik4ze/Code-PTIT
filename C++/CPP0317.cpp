#include <iostream>
#include <string>

using namespace std;

bool isValid(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        if ((s[l] - '0') % 2 != 0) return false;
        l++;
        r--;
    }
    if ((s[l] - '0') % 2 != 0) return false;
    return true;
}

void solve() {
    string s;
    cin >> s;
    if (isValid(s)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}