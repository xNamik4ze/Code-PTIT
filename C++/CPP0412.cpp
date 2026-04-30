#include <iostream>

using namespace std;

void print(int n, int num) {
    for (int i = 0; i < n; i++) {
        cout << num;
        if (i < n - 1) cout << " ";
    }
}

void solve() {
    int n;
    cin >> n;
    int count0 = 0, count1 = 0 ,count2 = 0;
    while (n--) {
        int num;
        cin >> num;
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    print(count0, 0); cout << " ";
    print(count1, 1); cout << " ";
    print(count2, 2);
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}