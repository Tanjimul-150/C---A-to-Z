//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long n,x,i,sum=0,flag,c;
    ///scanf("%d",&n);
    cin>>n;
    flag=n;
    for(i=1;flag>=1;i--)
    {
        x=flag%10;
        sum=sum*10+x;
        flag=flag/10;
    }
    //printf("% d\n",sum);
    cout<<sum<<endl;
    if(n==sum)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
