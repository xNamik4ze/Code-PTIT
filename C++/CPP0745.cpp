#include <iostream>

using namespace std;

const long long MOD = 1000000007;

void generate(long long fibo[]) {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 1001; i++) fibo[i] = (fibo[i-1] + fibo[i-2]) % MOD;
}

void solve(long long fibo[]) {
    int n;
    cin >> n;
    cout << fibo[n] << endl;
}

int main() {
    long long fibo[1001];
    generate(fibo);
    int t;
    cin >> t;
    while (t--) solve(fibo);
    return 0;
}