#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool first = true;

    int count = 0;
    while (n % 2 == 0)
    {
        count++;
        n /= 2;
    }
    if (count > 0)
    {
        if (!first)
            cout << "*";
        cout << "(2^" << count << ")";
        first = false;
    }

    for (int i = 3; i * i <= n; i += 2)
    {
        count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count > 0)
        {
            if (!first)
                cout << "*";
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }

    if (n > 2)
    {
        if (!first)
            cout << "*";
        cout << "(" << n << "^1)";
    }

    cout << endl;
    return 0;
}
