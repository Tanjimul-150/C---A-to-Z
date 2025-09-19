#include <iostream>
#include <iomanip>
using namespace std;

// Custom manipulator
ostream& display(ostream& os) {
    os << setw(10) << setprecision(5) << setfill('#') << fixed;
    return os;
}

int main() {
    float value = 12.345678;
    cout << display << value << endl;  // Output: ##12.34568
    return 0;
}
