#include <iostream>
#include <unordered_map>

using namespace std;

void solve() {
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;
    for (char c : s) {
        if (freq[c] == 1) cout << c;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}