#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < 3; j++) {
            int digit;
            cin >> digit;
            if (digit == 1) count++;
        }
        if (count >= 2) res++;
    }
    cout << res << endl;
}

int main() {
    solve();
    return 0;
}