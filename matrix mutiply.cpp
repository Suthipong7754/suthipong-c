#include <bits\stdc++.h>
using namespace std;
int m, n, A[100][100], B[100][100];
int main(){
    cin >> m, n;
    for (int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin >> A[i][j];
        }
    }
    for (int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cin >> B[i][j];
        }
    }
    for (int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            cout << A[i][j] * B[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}