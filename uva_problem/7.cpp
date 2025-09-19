#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    long long fib[51];
    fib[1] = 2;
    fib[2] = 3;
    for (int i = 3; i <= 50; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    for (int t = 1; t <= T; ++t)
    {
        int n;
        cin >> n;
        cout << "Scenario #" << t << ":\n";
        cout << fib[n] << "\n\n";
    }

    return 0;
}
