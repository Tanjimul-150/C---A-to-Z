#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        string S, T;
        cin >> S >> T;

        string result = "";
        int lenS = S.length();
        int lenT = T.length();
        int maxLen = max(lenS, lenT);

                for (int i = 0; i < maxLen; i++)
        {
            if (i < lenS)
                result += S[i];
            if (i < lenT)
                result += T[i];
        }

        cout << result << endl;
    }

    return 0;
}
