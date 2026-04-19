#include <iostream>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    set<int> unique;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        unique.insert(num);
    }

    for (auto num : unique) cout << num << " ";
    cout << endl;
}

int main() {
    solve();
    return 0;
}