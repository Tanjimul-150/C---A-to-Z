#include<iostream>
using namespace std;
int main()
{
    long long n,t,i,j,k;
    cin>>t;
    while(t--)
    {
        long long fact=1;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            fact=i*fact;
        }
        cout<<fact<<endl;
    }
    return 0;
}