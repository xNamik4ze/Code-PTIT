#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool valid(vector<int> &v) {
    int l = 0, r = v.size() - 1;
    while (l < r) {
        if (v[l] != v[r]) return false;
        l++;
        r--;
    };
    return true;
}

void solve() {
    string s;
    cin >> s;
    int check[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    vector<int> v;
    for (char c : s) {
        c = tolower(c);
        v.push_back(check[c - 'a']);
    };
    if (valid(v)) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}