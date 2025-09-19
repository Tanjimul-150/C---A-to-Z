#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,i,p;
    string str;
    cin>>n;
    while(n--)
    {
        cin>>str;
        p=str.length();
        for(i=0;i<=p;i++)
        {
            if(p>10)
            {
                cout<<str[i]<<p-2<<str[p-1]<<endl;
                break;
            }
            else
            {
                cout<<str<<endl;
                break;
            }
        }
    }
    return 0;
}