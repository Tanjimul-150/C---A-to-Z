#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class t>
class name
{
public:
    t data;
    name(t a)
    {
        data = a;
    }
    void display();
    /*{
        cout<<data<<endl;
    }*/
};
template <class t>
void name <t> :: display()
{
    cout << data << endl;
}
int main()
{
    name<float> t1(7.5);
    t1.display();
    return 0;
}