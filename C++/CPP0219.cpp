#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<int> row(n, 0), col(m, 0);
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            if (row[i] || col[j]) matrix[i][j] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}