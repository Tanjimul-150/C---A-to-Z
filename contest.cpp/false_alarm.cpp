#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> closed_doors;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 1)
        {
            closed_doors.push_back(i + 1);
        }
    }

    if (closed_doors.empty())
    {
        cout << "YES\n";
        return;
    }

    int first = closed_doors.front();
    int last = closed_doors.back();

    if (last - x + 1 <= first)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}