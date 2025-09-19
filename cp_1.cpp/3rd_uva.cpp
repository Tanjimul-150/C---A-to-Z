#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, P;
        cin >> N >> P;
        bool hartalDays[3651] = {false};

        for (int i = 0; i < P; ++i)
        {
            int h;
            cin >> h;
            for (int day = h; day <= N; day += h)
            {
                if (day % 7 != 6 && day % 7 != 0)
                {
                    hartalDays[day] = true;
                }
            }
        }

        int lostDays = 0;
        for (int day = 1; day <= N; ++day)
        {
            if (hartalDays[day])
            {
                lostDays++;
            }
        }

        cout << lostDays << endl;
    }
    return 0;
}