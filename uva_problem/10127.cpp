#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int count = 1;
        int remainder = 1 % n;

        while (remainder != 0)
        {
            remainder = (remainder * 10 + 1) % n;
            ++count;
        }

        cout << count << "\n";
    }

    return 0;
}
