#include <iostream>

using namespace std;

int extgcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = extgcd(b, a % b, x1, y1);

    x = y1;
    y = x1 - y1 * (a / b);

    return g;
}

void solve() {
    int a, m;
    cin >> a >> m;

    int x, y;
    int g = extgcd(a, m, x, y);

    if (g != 1) {
        cout << -1 << endl;
        return;
    }

    x = (x % m + m) % m;
    cout << x << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}