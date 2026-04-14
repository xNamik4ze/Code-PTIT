#include <iostream>

using namespace std;

bool isPalindrome(long long n) {
    if (n % 10 == 0 && n != 0) return false;
    long long reversed = 0;
    while (n > reversed) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return n == reversed || n == reversed / 10;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (isPalindrome(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}