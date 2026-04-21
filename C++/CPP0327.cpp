#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int remainder = 0;
    for (char c : s) {
        int bit = c - '0';
        remainder = (remainder * 2 + bit) % 5;
    }
    if (remainder == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}