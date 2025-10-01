#include <iostream>
using namespace std;

void prime(int n)
{
    if (n < 2)
    {
        cout << "NO" << endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        prime(n);
    }
    return 0;
}
