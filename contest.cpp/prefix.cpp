#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), res(n, 0);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int prefixMin = a[0];
        for (int i = 0; i < n; ++i)
        {
            prefixMin = min(prefixMin, a[i]);
            if (prefixMin == a[i])
                res[i] = 1;
        }

        int suffixMax = a[n - 1];
        for (int i = n - 1; i >= 0; --i)
        {
            suffixMax = max(suffixMax, a[i]);
            if (suffixMax == a[i])
                res[i] = 1;
        }

        for (int x : res)
            cout << x;
        cout << '\n';
    }
    return 0;
}
