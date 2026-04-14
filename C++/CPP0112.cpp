#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void solve() {
    double x1, y1, x2, y2, res;
    cin >> x1 >> y1 >> x2 >> y2;
    double height = abs(x1 - x2);
    double length = abs(y1 - y2);
    res = sqrt(pow(height, 2) + pow(length, 2));
    cout << fixed << setprecision(4) << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}