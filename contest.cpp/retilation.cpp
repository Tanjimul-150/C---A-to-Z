#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        long long numerator = n * a[1] - a[n];
        long long denominator = (long long)n * n -1;
        if (numerator % denominator != 0)
        {
            cout << "NO" << "\n";
            continue;
        }
        long long y = numerator / denominator;
        long long x = a[1] - n * y;
        if (x < 0 || y < 0)
        {
            cout << "NO" << "\n";
            continue;
        }

        bool canExplode = true;
        for (int i = 1; i <= n; i++)
        {
            long long expected = i * x + (n - i + 1) * y;
            if (expected != a[i])
            {
                canExplode = false;
                break;
            }
        }

        cout << (canExplode ? "YES" : "NO") << "\n";
    }

    return 0;
}
