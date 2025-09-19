#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long x = a, y = b;

    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    long long gcd = a;
    long long lcm = (x / gcd) * y;

    cout << gcd << " " << lcm << endl;
    return 0;
}
