// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};
class base2
{
protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base1: " << base1 << endl;
        cout << "The value of base2: " << base2 << endl;
        cout << "The sum of base1 & base2 is: " << base1 + base2 << endl;
    }
};
int main()
{
    derived ob1;
    ob1.set_base1(10);
    ob1.set_base2(20);
    ob1.show();
    return 0;
}