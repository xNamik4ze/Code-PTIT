#include <iostream>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }

    int count = 0;
    for (auto &[key, value] : freq)
        if (value >= 2) count += value;
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}