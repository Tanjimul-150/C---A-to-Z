#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
            // If n is even, output -1 (no valid permutation exists)
            cout << "-1\n";
        } else {
            // Generate a permutation for odd n
            vector<int> permutation(n);
            for (int i = 0; i < n; ++i) {
                permutation[i] = (i * 2 + 1) % n + 1; // Custom pattern logic
            }
            for (int x : permutation) {
                cout << x << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
