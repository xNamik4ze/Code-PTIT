#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool valid(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void solve() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)  {
        if (!valid(s[i])) cout << "." << (char)tolower(s[i]);
    }
}

int main() {
    solve();
}