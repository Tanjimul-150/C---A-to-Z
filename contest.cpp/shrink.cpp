#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n)
{
    vector<int> result(n);
    int left = 1, right = n;

    for (int i = 1; i < n; i += 2)
    {
        result[i] = right--;
    }
    for (int i = 0; i < n; i += 2)
    {
        result[i] = right--;
    }

    for (int x : result)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
