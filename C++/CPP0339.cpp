#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int count[26] = {0};
    for (char c : s) {
        count[c - 'a']++;
    }
    
    long long result = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            result += (count[i] * (count[i] + 1)) / 2;
        }
    }
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}