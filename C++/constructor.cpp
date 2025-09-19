#include <iostream>
using namespace std;
class person
{
    int a, b;

public:
    person(int n, int m)
    {
        a = n;
        b = m;
    }
    void sum()
    {
        cout << "Sum :" << a + b << endl;
    }
};
int main()
{
    person p(10, 20);
    p.sum();
    return 0;
}