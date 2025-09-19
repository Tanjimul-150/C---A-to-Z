#include<iostream>
using namespace std;
int main()
{
    long long n,i,j,k,even=0,odd=0,pos=0,neg=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        if(k%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if(k>0)
        {
            pos++;
        }
        else if(k<0)
        {
            neg++;
        }
    }
    cout<<"Even: "<< even<<endl;
    cout<<"Odd: "<< odd<<endl;
    cout<<"Positive: "<< pos<<endl;
    cout<<"Negative: "<< neg<<endl;
    return 0;
}