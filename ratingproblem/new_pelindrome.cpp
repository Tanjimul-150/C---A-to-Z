#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool possible = false;

        bool allSame = true;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] != s[0])
            {
                allSame = false;
                break;
            }
        }
        if (allSame)
        {
            cout << "NO\n";
            continue;
        }

        for (int i = 1; i < n / 2; ++i)
        {
            if (s[i] != s[0])
            {
                possible = true;
                break;
            }
        }
        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}