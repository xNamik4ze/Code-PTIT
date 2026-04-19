#include <iostream>
#include <vector>

using namespace std;

void multiply(const vector<vector<int>>& A, const vector<vector<int>>& B, vector<vector<int>>& C, int n, int m, int p) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void solve() {    
    int n, m, p;
    cin >> n >> m >> p; 
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(m, vector<int>(p));
    vector<vector<int>> C(n, vector<int>(p));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    multiply(A, B, C, n, m, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}