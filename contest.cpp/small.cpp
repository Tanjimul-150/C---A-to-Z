#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int count = 1; // Always start with one array
        for (int i = 1; i < n; ++i) {
            // If not consecutive (a[i] != a[i-1] + 1), start new array
            if (a[i] != a[i - 1] + 1) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
