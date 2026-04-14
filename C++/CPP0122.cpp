#include <iostream>

using namespace std;

const int MAX = 1000000;

bool isPrime[MAX + 1];

void sieve() {
    fill(isPrime, isPrime + MAX + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) isPrime[j] = false;
        }
    }
}

int max_div(int n, int m) {
    int res = n;
    while (res * n <= m) res *= n;
    return res;
}

void solve() {
    int n;
    cin >> n;
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            res *= max_div(i, n);
        }
    }
    cout << res << endl;
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