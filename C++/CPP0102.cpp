#include <iostream>

using namespace std;

void solve() {
    char c;
    cin >> c;
    if (isupper(c)) {
        cout << (char)tolower(c) << endl;
    } else {
        cout << (char)toupper(c) << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}