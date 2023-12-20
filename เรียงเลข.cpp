#include <bits/stdc++.h>
using namespace std;

int main() {
    int number[10];
    int N, reverse = 0;
    cin >> N;
    for (int i=0;i<N;i++){
      cin >> number[i];
    } 
    for (int i=N-1; i>=0; i--) {
        cout << number[i] << "\n";
        
    }
    return 0;
}