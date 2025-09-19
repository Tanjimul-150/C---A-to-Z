#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double R, S;
    cin >> R >> S;

    double squareDiagonal = S * sqrt(2);

    double circleDiameter = 2 * R;

    if (squareDiagonal <= circleDiameter)
        cout << "Circle\n";
    else if (circleDiameter <= S)
        cout << "Square\n";
    else
        cout << "Complex\n";
    return 0;
}