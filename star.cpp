#include <bits/stdc++.h>
using namespace std;
int Index(int& x, int& y, int& N) {
    return x + y * (N - 1 + (N % 2)) + y;
}
int main() {
    int N, i, x1, x2;
    bool isOdd;
    string sub, str = "";
    cin >> N;
    isOdd = N % 2;
    sub = string(N - 1 + isOdd, '-');
    for (i = 0; i < N / 2 + isOdd; i++) {
        str += sub;
        str += '\n';
    }
    x1 = (N - 1 + isOdd) / 2;
    x2 = (N - 1 + isOdd) / 2;
    for (i = 0; i < N / 2 + isOdd; i++) {
        str[Index(x1, i, N)] = '*';
        str[Index(x2, i, N)] = '*';
        x1--;
        x2++;
    }
    if (N > 1) str += string(str.rbegin() + 1 + (isOdd * (N + 1)), str.rend());
    cout << str;
    return 0;
}