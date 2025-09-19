#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        bool all_zeros = true;
        for (char c : s)
        {
            if (c != '0')
            {
                all_zeros = false;
                break;
            }
        }
        if (all_zeros)
        {
            cout << "Alice\n";
            continue;
        }

        if (k == 1)
        {
            bool all_ones = true;
            for (char c : s)
            {
                if (c != '1')
                {
                    all_ones = false;
                    break;
                }
            }
            if (all_ones)
            {
                cout << "Bob\n";
            }
            else
            {
                cout << "Alice\n";
            }
            continue;
        }

        if (k == n)
        {
            cout << "Alice\n";
            continue;
        }

        bool has_zero = false;
        for (char c : s)
        {
            if (c == '0')
            {
                has_zero = true;
                break;
            }
        }

        if (has_zero)
        {
            cout << "Alice\n";
        }
        else
        {
            if (k % 2 == 1)
            {
                cout << "Alice\n";
            }
            else
            {
                cout << "Bob\n";
            }
        }
    }
    return 0;
}