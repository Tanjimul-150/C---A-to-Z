#include <iostream>
#include <vector>
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
        vector<int> bad(n);
        for (int i = 0; i < n; i++)
            cin >> bad[i];

        int count = 0;
        for (int a = 0; a <= 9; a++)
        {
            if (find(bad.begin(), bad.end(), a) != bad.end())
                continue;
            for (int b = a + 1; b <= 9; b++)
            {
                if (find(bad.begin(), bad.end(), b) != bad.end())
                    continue;
                count += 6;
            }
        }
        cout << count << endl;
    }
    return 0;
}