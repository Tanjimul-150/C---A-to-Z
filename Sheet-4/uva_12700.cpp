#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T, caseNum = 1;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        string result;
        cin >> result;

        int b = 0, w = 0, t = 0, a = 0;
        for (char ch : result)
        {
            if (ch == 'B')
                b++;
            else if (ch == 'W')
                w++;
            else if (ch == 'T')
                t++;
            else if (ch == 'A')
                a++;
        }

        cout << "Case " << caseNum++ << ": ";
        int played = N - a;

        if (played == 0)
        {
            cout << "ABANDONED";
        }
        else if (b == played)
        {
            cout << "BANGLAWASH";
        }
        else if (w == played)
        {
            cout << "WHITEWASH";
        }
        else if (b == w)
        {
            cout << "DRAW " << b << " " << t;
        }
        else if (b > w)
        {
            cout << "BANGLADESH " << b << " - " << w;
        }
        else
        {
            cout << "WWW " << w << " - " << b;
        }

        cout << '\n';
    }

    return 0;
}
