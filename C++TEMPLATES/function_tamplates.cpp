#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <class t, class t1>
double avr(t a, t1 b)
{
    double avg = (a + b) / 2.0;
    return avg;
}
int main()
{
    int x = 5, y = 7;
    swapp(x, y);
    cout << x << endl
         << y << endl;
    double a;
    a = avr(7, 8);
    cout << endl;
    printf("The average of these numbers is %.2lf", a);
    return 0;
}