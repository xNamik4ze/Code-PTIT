#include <iostream>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ) {
        if (i <= n - 3 && s[i] == '0' && s[i+1] == '8' && s[i+2] == '4') i += 3;
        else  {
            cout << s[i];
            i++;
        }
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}