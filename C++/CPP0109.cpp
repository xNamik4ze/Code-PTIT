#include <iostream>
#include <cmath>

using namespace std;

bool valid(int n) {
    int dif = 0;
    while (n > 0) {
        (n % 10) % 2 == 0 ? dif++ : dif--;
        n /= 10;
    }
    return dif == 0;
}

void solve() {
    int n;
    cin >> n;
    int start = pow(10, n - 1);
    int end = pow(10, n) - 1;
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (valid(i)) {
            cout << i;
            count++;
            if (count % 10 == 0) cout << "\n";
            else cout << " ";
        }
    }
}

int main() {
    solve();
    return 0;
}