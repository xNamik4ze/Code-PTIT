#include <iostream>

using namespace std;

bool isLucky(int n) {
    int temp = n % 10;
    if (temp != 6) return false;
    n /= 10;
    temp =  n % 10;
    if (temp != 8) return false;
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (isLucky(n)) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}