#include <iostream>

using namespace std;

void generate(long long fibo[]) {
    fibo[1] = 1;
    fibo[2] = 1;
    for (int i = 3; i < 93; i++) fibo[i] = fibo[i-1] + fibo[i-2];
}

void solve(long long fibo[]) {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        cout << fibo[i];
        if (i < b) cout << " ";
    }
    cout << endl;
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