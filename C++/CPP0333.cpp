#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string nor(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (i == 0) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    return s;
}

string name(string s) {
    for (int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
    return s;
}

void solve() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) v.push_back(word);

    for (int i = 0; i < v.size() - 1; i++) {
        cout << nor(v[i]);
        if (i < v.size() - 2) cout << " ";
    }

    cout << ", ";
    cout << name(v.back());
}

int main() {
    solve();
    return 0;
}