#include <iostream>
using namespace std;

int main() {
    string str, t;
    cout << "Enter the main string: ";
    getline(cin, str);

    cout << "Enter the substring to search: ";
    getline(cin, t);

    bool found = false;

    for (int i = 0; i <= str.length() - t.length(); i++) {
        int j;
        for (j = 0; j < t.length(); j++) {
            if (str[i + j] != t[j])
                break;
        }
        if (j == t.length()) { // whole substring matched
            found = true;
            cout << "Substring found at index " << i << endl;
            break;
        }
    }

    if (!found)
        cout << "Substring not found" << endl;

    return 0;
}
