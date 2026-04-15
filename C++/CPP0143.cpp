#include <iostream>

using namespace std;

void generate(long long fibo[]) {
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

void solve(long long fibo[]) {
    int n;
    cin >> n;
    cout << fibo[n] << endl;
}

int main() {
    long long fibo[93];
    generate(fibo);
    int t;
    cin >> t;
    while (t--) {
        solve(fibo);
    }
    return 0;
}