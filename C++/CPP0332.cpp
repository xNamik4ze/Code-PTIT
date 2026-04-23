#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void solve() {
    string s;
    getline(cin, s);
    for (char &c : s) c = tolower(c);

    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word) v.push_back(word);

    cout << v.back();
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn" << endl;
}

int main() {
    solve();
    return 0;
}