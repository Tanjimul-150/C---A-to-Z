#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() 
{
    long long t;
    cin >> t;
    while (t--) 
    {
        long long n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long res = 0;
        long long current = 0;
        for (int i = 0; i < n; ++i) 
        {
            current++;
            if (a[i] * current >= x) 
            {
                res++;
                current = 0;
            }
        }
        cout << res << endl;
    }
}

int main() 
{
    solve();
    return 0;
}