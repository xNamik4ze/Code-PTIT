#include <iostream>

using namespace std;

bool isValid(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 6 && digit != 8) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isValid(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}