#include <iostream>
#include <vector>
using namespace std;

const int MAX = 32768;
bool isPrime[MAX];

int main()
{
    for (int i = 0; i < MAX; ++i)
        isPrime[i] = true;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < MAX; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX; j += i)
                isPrime[j] = false;
        }
    }

    int n;
    while (cin >> n && n != 0)
    {
        int count = 0;
        for (int i = 2; i <= n / 2; ++i)
        {
            if (isPrime[i] && isPrime[n - i])
                ++count;
        }
        cout << count << endl;
    }

    return 0;
}
