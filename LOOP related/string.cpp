#include <iostream>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int score = 0;
    string processedString = S; // Store the modified string

    for (size_t i = 0; i < processedString.length(); i++) {
        char ch = processedString[i];

        if (ch == 'V') {
            score += 5;
        } else if (ch == 'W') {
            score += 2;
        } else if (ch == 'X') {
            if (i + 1 < processedString.length()) {
                processedString.erase(i + 1, 1); // Remove the next character
            }
        } else if (ch == 'Y') {
            if (i + 1 < processedString.length()) {
                char nextChar = processedString[i + 1];
                processedString.erase(i + 1, 1); // Remove the character
                processedString.push_back(nextChar); // Move to end
            }
        } else if (ch == 'Z') {
            if (i + 1 < processedString.length()) {
                char nextChar = processedString[i + 1];
                if (nextChar == 'V') {
                    score /= 5;
                } else if (nextChar == 'W') {
                    score /= 2;
                }
                processedString.erase(i + 1, 1); // Remove the next character
            }
        }
    }

    cout << score << endl;
    return 0;
}
