#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void score() {
    int exam;
    cin >> exam;
    string key = (exam == 101) ? "ABBADCCABDCCABD" : "ACCABCDDBBCDDBB";

    int count = 0;
    char temp;

    for (int i = 0; i < 15; i++) {
        cin >> temp;
        if (temp == key[i]) count++;
    }

    double score = count * 10 / 15.0;
    cout << fixed << setprecision(2) << score << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        score();
    }
    return 0;
}