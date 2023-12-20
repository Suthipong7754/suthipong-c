#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int number[10];
    for (int i=0;i<N;i++){
      cin >> number[i];
    } 
    int size = sizeof(N) / sizeof(number[0]);
    sort(number, number + size);
    for (int i=0; i<size; i++) {
        cout << number[i] << "\n";
    }
    return 0;
}
