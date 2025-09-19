#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> freq(n + 2, 0);
        for (int num : a) {
            freq[num]++;
        }

        vector<int> mex_counts(n + 2, 0);
        int mex = 0;
        while (freq[mex] > 0) {
            mex++;
        }

        vector<int> res(n + 1, 0);
        res[0] = 1;

        for (int k = 1; k <= n; ++k) {
            if (k > mex) {
                res[k] = mex_counts[k - 1];
            } else {
                res[k] = mex - k + 1;
            }
        }

        for (int k = 0; k <= n; ++k) {
            cout << res[k] << " ";
        }
        cout << "\n";
    }
    return 0;
}