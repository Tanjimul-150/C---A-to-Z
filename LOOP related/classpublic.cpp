#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    int salary;
    int number;
    void display()
    {
        cin>>salary>>number;
        cout<<"His salary: "<<salary<<endl;
        cout<<"His number: "<<number<<endl;
    }
};
int main()
{
    person man1;
    person man2;
    man1.display();
    man2.display();
    return 0;
}
