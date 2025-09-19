#include<iostream>
using namespace std;
int main()
{
    int a,b,c,N;
    cout<<"Give me the value of N: ";
    cin>>N;
    int i=0;
    while(i<N)
    {
        i++;
        if(i==15)
        {
            continue;
        }
        cout<<i<<"\n";
    }
   /*for(int i=1;i<=N;i++)
   {
        if(i==30)
        {
            continue;
        }
        cout<<i<<endl;;
   }*/
    return 0;
}