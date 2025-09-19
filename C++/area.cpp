#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     double PI = 3.141592653;
     double r,area;
     cin>>r;
     area = PI * r * r;
     cout<<area<<endl;
     return 0;

}