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
    int a, b;
    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i ++) {
        if (isPrime[i]) cout << i << " ";
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