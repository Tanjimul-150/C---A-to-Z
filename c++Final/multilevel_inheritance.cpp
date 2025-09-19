#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void setroll_number(int r)
    {
        roll_number = r;
    }
    void getroll_number()
    {
        cout << "The roll number is      : " << roll_number << endl;
    }
};
class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks of math       :" << math << endl;
        cout << "The marks of physics    : " << physics << endl;
    }
};
class Results : public Exam
{
    float percantage;

public:
    void display()
    {
        getroll_number();
        get_marks();
        cout << "The percantage of marks :" << (math + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Results Tanjimul;
    Tanjimul.setroll_number(50);
    Tanjimul.set_marks(90.45, 91);
    Tanjimul.display();
    return 0;
}