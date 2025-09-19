#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
                cout << (i + 1) / 2 << " ";
            else
                cout << n - (i / 2 - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}