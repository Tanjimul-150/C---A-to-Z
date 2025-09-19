#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
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
        bool found = false;
        for (int a = 3; a <= n / 2; a += 2)
        {
            int b = n - a;
            if (isPrime[a] && isPrime[b])
            {
                cout << n << " = " << a << " + " << b << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Goldbach's conjecture is wrong." << endl;
        }
    }

    return 0;
}
