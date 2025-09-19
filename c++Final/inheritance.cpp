#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class simplecalculator
{
protected:
    int num1, num2;

public:
    void set_number1(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    /*int addition1(int a, int b)
    {
        return num1 + num2;
    }
    int subtraction1(int a, int b)
    {
        return num1 - num2;
    }
    double multi1(double a, double b)
    {
        return num1 * num2;
    }
    double division1(double a, double b)
    {
        return static_cast<double>(num1) / num2;
    }*/
    void show1()
    {
        cout << "The value of num1 :" << num1 << endl;
        cout << "The value of num2 :" << num2 << endl;
        cout << "The sum is :" << num1 + num2 << endl;
        cout << "The subtraction is : " << num1 - num2 << endl;
        cout << "The multi is : " << num1 * num2 << endl;
        cout << ":The divison is :" << static_cast<double>(num1) / num2 << endl;
        /*cout << "Addition: " << addition1(10, 20) << endl;
        cout << "subtraction : " << subtraction1(10, 20) << endl;
        cout << "multi : " << multi1(10, 20) << endl;
        cout << "division: " << division1(10, 20) << endl;*/
    }
};
class scientificcalculator
{
protected:
    int num3, num4;

public:
    void set_number2(int c, int d)
    {
        num3 = c;
        num4 = d;
    }
    /*int addition2(int c, int d)
    {
        return num3 + num4;
    }
    int subtraction2(int c, int d)
    {
        return num3 - num4;
    }
    double multi2(double c, double d)
    {
        return num3 * num4;
    }
    double division2(double c, double d)
    {
        return static_cast<double>(num3) / num4;
    }*/
    void show2()
    {
        cout << "The value of num1 :" << num3 << endl;
        cout << "The value of num2 :" << num4 << endl;
        cout << "The sum is :" << num3 + num4 << endl;
        cout << "The subtraction is : " << num3 - num4 << endl;
        cout << "The multi is : " << num3 * num4 << endl;
        cout << ":The divison is :" << static_cast<double>(num3) / num4 << endl;
    }
};
class hybridcalc : public simplecalculator, public scientificcalculator
{
public:
    void display1()
    {
        show1();
        show2();
    }
};
int main()
{
    hybridcalc ob1;
    ob1.set_number1(10, 20);
    ob1.set_number2(30, 40);
    ob1.display1();
    return 0;
}