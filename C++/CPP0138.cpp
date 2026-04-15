#include <iostream>

using namespace std;

const int MAX = 1000000;

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
    for (int p1 = 2; p1 <= n / 2; p1++) {
        int p2 = n - p1;
        if (isPrime[p1] && isPrime[p2]) {
            cout << p1 << " " << p2 << endl;
            return ;
        }
    }
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