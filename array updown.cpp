#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int main(){
    int N;
    cin >> N;
    for (int r=0;r<N;r++){
        for (int c=0;c<N;c++){
            cin >> arr[r][c];
        }
    }
    for (int r=0;r<N;r++){
        for (int c=0;c<N;c++){
            printf("(%d %d) ",r+1,c+1);
        }
        cout << "\n";
    }
}
