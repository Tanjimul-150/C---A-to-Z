#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Unary minus operator overload
    Number operator-() {
        return Number(-value);
    }

    // Binary minus operator overload
    Number operator-(const Number& obj) {
        return Number(value - obj.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number a(10), b(5), c;

    cout << "Original values:\n";
    a.display();
    b.display();

    // Unary minus
    c = -a;
    cout << "\nUnary -a:\n";
    c.display();

    // Binary minus
    c = a - b;
    cout << "\na - b:\n";
    c.display();

    return 0;
}
