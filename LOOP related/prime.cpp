//#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int N,i,num,prime;
    cin>>N;
    //scanf("%d",&N);
    for(num=2;num<=N;num++)
    {
        prime=1;
        for(i=2;i<num;i++)
            if(num%i==0)
        {
            prime=0;
            break;
        }
        if(prime)
        {
            cout<<num<<"\t";
            //printf("%d\t",num);
        }
    }
    return 0;
}
