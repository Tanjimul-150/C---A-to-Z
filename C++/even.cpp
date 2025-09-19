#include<iostream>
using namespace std;
int main()
{
    long long N,i=1,even=0;
    cout<<"Give me the value of N: ";
    cin>>N;
    /*for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            even=1;
        }
    }
    if(even==0)
    {
        cout<<"-1"<<endl;
    }*/
   while(i<=N)
   {
        if(i%2==0)
        {
            cout<<i<<endl;
            even=1;
        }
        i++;
   }
   if(even==0)
   {
        cout<<"-1\n";
   }
    return 0;
}