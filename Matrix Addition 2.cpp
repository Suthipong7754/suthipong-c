#include <iostream>

using namespace std;

int main() {
  int m, n;
  cin >> m >> n;

  int A[m][n];
  int B[m][n];
  int C[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> B[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

