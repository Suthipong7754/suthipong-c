#include <bits/stdc++.h>
using namespace std;

int main() {
    int number[5];
    for (int i=0;i<5;i++){
      cin >> number[i];
    } 
    int size = sizeof(number) / sizeof(number[0]);
    sort(number, number + size);
    for (int i=0; i<size; i++) {
        cout << number[i] << "\n";
    }
    return 0;
}
