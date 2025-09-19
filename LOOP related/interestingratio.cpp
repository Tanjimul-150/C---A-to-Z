#include <iostream>
#include <algorithm>

using namespace std;

int computeMaxPower(int s, int k) {
    int power = k;
    int position = 0;
    int direction = 1; // 1 for forward, -1 for backward
    bool canTurn = false;

    while (position != s) {
        if (position + power * direction >= 0 && position + power * direction <= s) {
            position += power * direction;
        } else {
            if (direction == 1) {
                // Need to turn around
                if (canTurn && power > 1) {
                    direction = -1;
                    power--;
                    canTurn = false;
                } else {
                    // Cannot turn, must move to boundary
                    position = s;
                }
            } else {
                // direction is -1, turn back to forward
                if (canTurn && power > 1) {
                    direction = 1;
                    power--;
                    canTurn = false;
                } else {
                    // Cannot turn, must move to boundary
                    position = 0;
                }
            }
        }
        canTurn = true;
    }
    return power;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, k;
        cin >> s >> k;
        cout << computeMaxPower(s, k) << endl;
    }
    return 0;
}