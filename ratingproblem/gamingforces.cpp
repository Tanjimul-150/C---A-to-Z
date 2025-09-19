#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h[100];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        sort(h, h + n);
        int spells = 0;
        int i = 0;
        while (i < n)
        {
            if (i + 1 < n && h[i] == 1 && h[i + 1] == 1)
            {
                spells++;
                i += 2;
            }
            else
            {
                spells++;
                i++;
            }
        }
        cout << spells << endl;
    }
    return 0;
}