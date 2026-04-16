#include <iostream>

using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    int blocks;
    long long rem;
    blocks = n / k;
    rem = n % k;

    long long res = blocks * (k-1) * k / 2 + rem * (rem + 1) / 2;
    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}