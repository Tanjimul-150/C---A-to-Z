#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        while (q--) {
            int type;
            cin >> type;
            if (type == 1) {
                int i, x;
                cin >> i >> x;
                a[i - 1] = x;
            } else {
                int k;
                cin >> k;
                int g = gcd(k, m);
                bool possible = true;
                for (int i = 0; i < n - 1; ++i) {
                    int diff = (a[i + 1] - a[i]) % m;
                    if (diff < 0) diff += m;
                    if (diff % g != 0) {
                        possible = false;
                        break;
                    }
                }
                cout << (possible ? "YES" : "NO") << '\n';
            }
        }
    }
}

int main() {
    solve();
    return 0;
}
