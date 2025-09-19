#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int *b;
    b=&a;
    //address of operator;
    cout<<"The value of address a is " << &a <<endl;
    cout<<"The value of address a is " << b <<endl;
    //value at dereferance oeprator;
    cout<<"The value of address b is " << *b <<endl;
    //pointer to pointer;
    int **c=&b;
    cout<<"The address of b is " << &b <<endl;
    cout<<"The address of b is " << c <<endl;
    cout<<"The value at address c is "<< *c <<endl;
    cout<<"The value at address value_at(value at(c)) is "<< **c <<endl;
    return 0;
}