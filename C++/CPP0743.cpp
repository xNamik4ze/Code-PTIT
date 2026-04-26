#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void solve() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) v.push_back(word);

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}