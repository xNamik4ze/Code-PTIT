#include <iostream>

using namespace std;

long long gcdFind(long long a, long long b) {
    if (b == 0) return a;
    return gcdFind(b, a % b);
}

void solve() {
    long long a, b;
    cin >> a >> b;
    long long gcd = gcdFind(a, b);
    long long lcm = a / gcd * b;
    cout << lcm << " " << gcd << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}