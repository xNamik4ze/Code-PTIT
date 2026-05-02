#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

map<string, int> countEmail;

void solve() {
    string s;
    getline(cin, s);
    for (char &c : s) c = tolower(c);
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) v.push_back(word);

    string res = v.back();
    for (int i = 0; i < (int)v.size() - 1; i++) {
        res += v[i][0];
    }

    countEmail[res]++;
    if (countEmail[res] == 1) cout << res << "@ptit.edu.vn" << "\n";
    else cout << res << countEmail[res] << "@ptit.edu.vn" << "\n";
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}