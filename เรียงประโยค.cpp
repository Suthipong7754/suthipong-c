#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<string> sentences;
    string sentence;

    cout << "Enter the sentences: " << endl;
    getline(cin, sentence);

    int start = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') {
            sentences.push_back(sentence.substr(start, i - start + 1));
            start = i + 2;
        }
    }

    sort(sentences.begin(), sentences.end());

    cout << "Sorted sentences: ";
    for (int i = 0; i < sentences.size(); i++) {
        cout << sentences[i] << " ";
    }

    return 0;
}
