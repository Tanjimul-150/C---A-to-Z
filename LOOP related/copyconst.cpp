#include <iostream>
#include <string>
using namespace std;
class MyClass 
{
private:
    int data;
    string name;
public:
    ~MyClass()
    {
        cout<<"My name is tanjimul"<<endl;
        cout<<"Destructor called"<<endl;
    }
    MyClass(int d,string n)
    {
        data=d; 
        name=n;
        cout << "Parameterized Constructor called!" << endl;
    }
    MyClass(MyClass &other)
    {
        data=other.data; 
        name=other.name;
        cout << "Copy Constructor called!" << endl;
    }
    void display()
    {
        cout <<"Name: " << name<< endl;
        cout<<"Data: " << data <<endl;
    }
};
int main() 
{
    MyClass
    obj1(42, "Tanjimul");
    obj1.display();
    MyClass obj2 = obj1;
    obj2.display();
    return 0;
}