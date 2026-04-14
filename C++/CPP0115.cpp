#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0) cout << 2 << " " << count;
    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0) cout << " " << i << " " << count;
    }
    if (n > 1) cout << " "<< n << " " << 1;
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}