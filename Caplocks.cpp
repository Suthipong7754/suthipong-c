#include <iostream>
#include <string>

using namespace std;

string convert(string text) {
    for (int i = 0; i < text.length(); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;
        }
    }
    return text;
}

int main() {
    string text;
    cout << "Enter a text: ";
    getline(cin, text);

    cout << "Converted text: " << convert(text) << endl;

    return 0;
}

