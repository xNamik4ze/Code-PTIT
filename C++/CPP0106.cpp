#include <iostream>

using namespace std;

bool isPalindrome(long long n) {
    long long origin = n;
    long long reverse = 0;
    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    return origin == reverse;
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