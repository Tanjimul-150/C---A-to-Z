#include<bits/stdc++.h>
using namespace std;
class person
{
private:
    double salary;
    long long number;
    string name;
public:
    void display(double a,long long b,string c)
    {

        salary=a;
        number=b;
        name=c;
        cout<<"His salary: "<<a<<endl;
        cout<<"His number: "<<b<<endl;
        cout<<"His name  : "<<c<<endl;
    }
};
int main()
{
    person man1;
    person man2;
    cout<<"For man 1: "<<endl;
    man1.display(30000,1851705053,"Toha");
    cout<<"For man 2: "<<endl;
    man2.display(40000,1921289941,"Tanjimul");
    return 0;
}
