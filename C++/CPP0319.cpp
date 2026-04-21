#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int m, s;
    cin >> m >> s;
    if (s == 0) {
        if (m == 1) cout << "0 0";
        else cout << "-1 -1";
        return;
    }
    if (s > 9 * m) {
        cout << "-1 -1";
        return;
    }

    int sum = s;
    string numM = "";
    for (int i = 0; i < m; i++) {
        int d = min(9, sum);
        numM += char('0' + d);
        sum -= d;
    }

    sum = s - 1;
    string numm = "";
    for (int i = 0; i < m; i++) numm += '0';
    for (int i = m - 1; i >= 0; i--) {
        int digit = min(9, sum);
        numm[i] = char('0' + digit);
        sum -= digit;
    }
    numm[0] = char(numm[0] + 1);
    cout << numm << " " << numM << endl;
}

int main() {
    solve();
    return 0;
}