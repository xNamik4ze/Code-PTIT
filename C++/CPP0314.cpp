#include <iostream>
#include <set>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    cin.ignore();
    set<string> s;
    string line;

    for (int i = 0; i < n; i++) {
        getline(cin, line);
        s.insert(line);
    }
    cout << s.size();
}

int main() {
    solve();
    return 0;
}