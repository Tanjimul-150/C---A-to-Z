#include<iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w==2)
    {
        cout<<"No\n";
    }
    else if(w%2==0)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}