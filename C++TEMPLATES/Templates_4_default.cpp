#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class t1 = int, class t2 = float, class t3 = string>
class name
{
    // public:
    t1 a;
    t2 b;
    t3 c;

public:
    name(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};
int main()
{
    name<> h1(10, 20.6, "Tanjimul");
    h1.display();
    cout << endl;
    name<float, int, string> h2(20.89, 40, "Toha");
    h2.display();

    return 0;
}
