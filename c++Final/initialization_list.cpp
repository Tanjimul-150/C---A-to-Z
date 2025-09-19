/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Test
{
    int a;
    int b;

public:
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : b(j), a(i+b);
    Test(int i, int j) : a(i), b(a + j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);
    //Test(int i, int j) : b(j), a(i+b);
    //Test(int i, int j) : a(i), b(a + j);
    return 0;
}