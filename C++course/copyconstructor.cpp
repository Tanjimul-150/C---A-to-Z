/*#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    int n;
    string name;

    // Parameterized constructor
    student(int m, string s)
    {
        n = m;
        name = s;
    }

    // Copy constructor
    student(student &ob1)
    {
        n = ob1.n;
        name = ob1.name;
    }

    // Display function
    void show()
    {
        cout << "Marks: " << n << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    student ob2(100, "Tanjimul");
    student ob1(ob2); // Copy constructor called
    ob1.show();       // Display copied values
    return 0;
}*/

#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};
int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
