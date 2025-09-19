#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    int year = stoi(s);
    for (int sum = 0; sum <= year; ++sum)
    {
        if (sum * sum == year)
        {
            cout << sum / 2 << " " << sum - sum / 2 << endl;
            return;
        }
    }

    cout << "-1" << endl;
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
