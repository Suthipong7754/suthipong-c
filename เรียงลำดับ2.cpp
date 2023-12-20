#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    sort(numbers, numbers + 5, greater<int>());

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
