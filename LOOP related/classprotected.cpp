#include<bits/stdc++.h>
using namespace std;
class person
{
protected:
    double salary;
    long long number;
    string name;
};
class identity:
    public person
{
    public:
    void display()
    {
        cin>>salary>>number>>name;
        cout<<"His salary: "<<salary<<endl;
        cout<<"His number: "<<number<<endl;
        cout<<"His name  : "<<name<<endl;
    }
};
int main()
{
    identity man1;
    identity man2;
    cout<<"For man 1: "<<endl;
    man1.display();
    cout<<"For man 2: "<<endl;
    man2.display();
    return 0;
}