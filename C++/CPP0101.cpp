#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long sum = n * (n + 1) / 2;
    cout << sum << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}