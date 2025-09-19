#include <iostream>
#include <string>
using namespace std;
class MyClass 
{
private:
    int data;
    string name;
public:
    MyClass(int d,string n)
    {
        data=d; 
        name=n;
        cout << "Parameterized Constructor called!" << endl;
    }
    void display() const 
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
    return 0;
}