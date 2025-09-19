#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int seq[3000];
    bool diff[3000];

    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> seq[i];
        }

        for (int i = 1; i < n; i++)
        {
            diff[i] = false;
        }

        for (int i = 1; i < n; i++)
        {
            int d = abs(seq[i] - seq[i - 1]);
            if (d >= 1 && d < n)
                diff[d] = true;
        }

        bool jolly = true;
        for (int i = 1; i < n; i++)
        {
            if (!diff[i])
            {
                jolly = false;
                break;
            }
        }

        if (jolly)
            cout << "Jolly\n";
        else
            cout << "Not jolly\n";
    }

    return 0;
}
