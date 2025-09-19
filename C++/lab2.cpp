#include<iostream>
using namespace std;
class person{
    string name;
    public:
    person(string n){
        name=n;
    }
    person(person &p){
        name=p.name;
    }
    void display(){
        cout<<"Name : "<<name<<endl;
    }
};
int main(){
    person p1("Alice");
    person p2=p1;
    p2.display();
    person p3=p2;
    p3.display();
    return 0;
}