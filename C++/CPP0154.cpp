#include <iostream>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    if (k > n) {
        cout << (k == n * (n + 1) / 2) << endl;
        return;
    }
    
    int blocks;
    long long rem;
    blocks = n / k;
    rem = n % k;

    long long res = blocks * (k-1) * k / 2 + rem * (rem + 1) / 2;
    cout << (res == k) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}