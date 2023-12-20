#include <iostream>

using namespace std;

int main() {
    int height;
    cin >> height;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == height - 1) {
                cout << "#";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

