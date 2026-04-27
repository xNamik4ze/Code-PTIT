#include <iostream>

using namespace std;

const int MAX = 10000;

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
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (isPrime[i]) count++;
    }
    cout << count << endl;
}

int main() {
    sieve();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}