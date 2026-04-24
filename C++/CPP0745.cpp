#include <iostream>

using namespace std;

void generate(long long fibo[]) {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 3; i < 1001; i++) fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD
}

void solve(long long fibo[]) {
    int n;
    cin >> n;
    cout << fibot[n] << endl;
}

int main() {
    long long fibo[1001];
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}