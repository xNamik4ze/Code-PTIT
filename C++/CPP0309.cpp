#include <iostream>

using namespace std;

void solve() {
    string s;
    getline(cin , s);
    int count = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] != ' ' && s[i] != '\t')
            if (i == 0 || s[i-1] == ' ' || s[i-1] =='\t')
                count++;
    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) solve();
    return 0;
}