#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int A, B;
    cin >> A >> B;
    int floorResult = floor(1.0 * A / B);
    int ceilResult = ceil(1.0 * A / B);
    int roundResult = round(1.0 * A / B);
    cout << "floor " << A << " / " << B << " = " << floorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << ceilResult << endl;
    cout << "round " << A << " / " << B << " = " << roundResult << endl;

    return 0;
}
