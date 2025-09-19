#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int countOne = 0;
        while (N > 0)
        {
            countOne += (N % 2);
            N /= 2;
        }
        int result = 0;
        int power= 1;
        while (countOne > 0)
        {
            result += power;
            power *= 2;
            --countOne;
        }
        cout << result << endl;
    }

    return 0;
}

