#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    bool isPrime = true;

    if (N <= 1)
        isPrime = false;
    else if (N <= 3)
        isPrime = true;
    else if (N % 2 == 0 || N % 3 == 0)
        isPrime = false;
    else
    {
        for (long long i = 5; i * i <= N; i += 6)
        {
            if (N % i == 0 || N % (i + 2) == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    cout << (isPrime ? "YES" : "NO") << endl;
    return 0;
}
