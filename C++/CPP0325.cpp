#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int sum_odd = 0, sum_even = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sum_odd += (s[i] - '0');
        else sum_even += (s[i] - '0');
    }
    if (abs(sum_odd - sum_even) % 11 == 0) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}