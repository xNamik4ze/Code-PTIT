#include <iostream>
#include <sstream>

using namespace std;

void solve() {
    string s, del, word, res = "";
    getline(cin, s);
    cin >> del;
    stringstream ss(s);

    while (ss >> word) {
        if (word != del) {
            if (!res.empty()) res += " ";
            res += word;
        }
    }
    cout << res;
}

int main() {
    solve();
    return 0;
}