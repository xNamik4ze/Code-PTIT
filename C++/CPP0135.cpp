#include <iostream>

using namespace std;

const int MAX = 1000;

bool isPrime[MAX + 1];

void sieve() {
    fill(isPrime, isPrime + MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j+= i) isPrime[j] = false;
        }
    }
}

void solve() {
    int n;
    cin >> n;
    if (4 <= n) cout << 4 << " ";
    for (int i = 3; i * i <= n; i += 2) {
        if  (isPrime[i]) cout << i * i << " ";
    }
    cout << endl;
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}