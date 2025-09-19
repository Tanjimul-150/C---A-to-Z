#include <iostream>
#include <string>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int left = 0, right = n - 1;

    while (left < right && s[left] != s[right])
    {
        left++;
        right--;
    }

    cout << (right - left + 1) << endl;
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
