#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double n, p;
    while (cin >> n >> p)
    {

        double k = pow(p, 1.0 / n);
        cout << fixed << setprecision(0) << k << "\n";
    }
    return 0;
}
