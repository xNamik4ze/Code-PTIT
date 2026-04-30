#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long total_sum = (long long)n * (n + 1) / 2;
    long long real_sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        real_sum += num;
    }
    cout << total_sum - real_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}