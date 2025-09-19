#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int good_pairs = 0;

    // Counting the existing "good pairs"
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            ++good_pairs;
        }
    }

    // Checking if we can rearrange the characters to get exactly k good pairs
    cout << (good_pairs == k ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
