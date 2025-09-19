#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int strength_j = a[j - 1];

        int stronger = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > strength_j)
                stronger++;
        }

        if (stronger <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
