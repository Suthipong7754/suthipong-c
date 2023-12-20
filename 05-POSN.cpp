#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x;
    if (is_prime(x)) {
        cout << x << endl;
    } else {
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
