#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        // Using vector with 1-indexing.
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        // Calculate y using the equations derived from i = 1 and i = n.
        // y = (n * a[1] - a[n]) / (n^2 - 1)
        long long numerator = n * a[1] - a[n];
        long long denominator = (long long)n * n - 1;  // n^2 - 1, always >= 3 since n >= 2

        // y must be an integer.
        if (numerator % denominator != 0) {
            cout << "NO" << "\n";
            continue;
        }
        long long y = numerator / denominator;
        long long x = a[1] - n * y;
        
        // x and y must be non-negative.
        if (x < 0 || y < 0) {
            cout << "NO" << "\n";
            continue;
        }
        
        // Validate the solution for every index.
        bool canExplode = true;
        for (int i = 1; i <= n; i++) {
            long long expected = i * x + (n - i + 1) * y;
            if (expected != a[i]) {
                canExplode = false;
                break;
            }
        }
        
        cout << (canExplode ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
