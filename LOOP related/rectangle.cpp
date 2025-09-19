#include<iostream>
#include <iostream>
using namespace std;

int main() {
    int H1, W1, H2, W2;

    while (true) {
        cin >> H1 >> W1 >> H2 >> W2;
        if (H1 == 0 && W1 == 0 && H2 == 0 && W2 == 0)
            break;

        int area1 = H1 * W1;
        int area2 = H2 * W2;

        if (area1 > area2) {
            cout << "First rectangle is larger" << endl;
        } else if (area1 < area2) {
            cout << "Second rectangle is larger" << endl;
        } else {
            cout << "Same rectangle" << endl;
        }
    }

    return 0;
}
