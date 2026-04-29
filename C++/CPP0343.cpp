#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void solve() {
    string s;
    getline(cin, s);
    stringstream ss(s);

    int odd = 0, even = 0, n = 0;
    int num;
    while (ss >> num) {
        n++;
        if (num % 2 == 0) even++;
        else odd++;
    }

    if ((n % 2 == 1 && odd > even) || (n % 2 == 0 && odd < even)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}