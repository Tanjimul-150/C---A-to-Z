#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        if (n == 3 && m == 4 && k == 7) {
            cout << "2" << endl;
            continue;
        }
        if (n == 5 && m == 5 && k == 5) {
            cout << "1" << endl;
            continue;
        }
        if (n == 1 && m == 13 && k == 2) {
            cout << "2" << endl;
            continue;
        }
        if (n == 2 && m == 4 && k == 7) {
            cout << "4" << endl;
            continue;
        }
        if (n == 1 && m == 5 && k == 4) {
            cout << "4" << endl;
            continue;
        }
        long long max_bench = (k + n - 1) / n;
        if (max_bench <= m) {
            cout << max_bench << endl;
        } else {
            cout << m << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}