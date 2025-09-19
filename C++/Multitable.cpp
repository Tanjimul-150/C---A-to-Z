#include<iostream>
using namespace std;
int main()
{
    int a,s,d;
    int i,N;
    cout<<"Give me the value of a & N: ";
    cin>>a>>N;
    for ( i =1; i <=N; i++)
    {
        s=a*i;
        cout<< a << "*" << i << "=" << s <<endl;
    }
   return 0;
}