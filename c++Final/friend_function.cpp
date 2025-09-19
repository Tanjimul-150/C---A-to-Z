#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

    // Normalize time if seconds or minutes overflow
    void normalize() {
        minute += second / 60;
        second %= 60;
        hour += minute / 60;
        minute %= 60;
        hour %= 24;  // Optional: wrap around 24-hour format
    }

public:
    // Constructor
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {
        normalize();
    }

    // Overload '+' operator to add two Time objects
    Time operator+(const Time& t) const {
        Time result(hour + t.hour, minute + t.minute, second + t.second);
        result.normalize();
        return result;
    }

    // Overload '-' operator to subtract two Time objects
    Time operator-(const Time& t) const {
        int total1 = hour * 3600 + minute * 60 + second;
        int total2 = t.hour * 3600 + t.minute * 60 + t.second;
        int diff = abs(total1 - total2);  // Absolute difference in seconds

        return Time(diff / 3600, (diff % 3600) / 60, diff % 60);
    }

    // Overload '++' (pre-increment) to add 1 minute
    Time& operator++() {
        minute++;
        normalize();
        return *this;
    }

    // Display function
    void show() const {
        cout << hour << "h " << minute << "m " << second << "s" << endl;
    }
};

int main() {
    Time t1(2, 45, 50);
    Time t2(1, 30, 30);

    Time sum = t1 + t2;
    Time diff = t1 - t2;

    cout << "Sum: ";
    sum.show();

    cout << "Difference: ";
    diff.show();

    ++t1;  // Increment t1 by 1 minute
    cout << "After ++t1: ";
    t1.show();

    return 0;
}
