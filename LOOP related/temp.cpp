#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i) 
    {
        double C, d;
        cin >> C >> d;
        double c_increase = (5.0 / 9) * d;
        double new_celsius = C + c_increase;
        cout << "Case " << i << ": " << fixed << setprecision(2) << new_celsius << endl;
    }
    return 0;
}
