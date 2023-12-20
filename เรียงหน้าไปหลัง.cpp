#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream stream(str);
    while (getline(stream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    string input;
    getline(cin, input);

    vector<string> words = split(input, ' ');
    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i] << ' ';
    }
    cout << endl;

    return 0;
}
