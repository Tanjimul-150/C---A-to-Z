#include<iostream>
using namespace std;
int main()
{
    long long n,m,a,flot;
    long long width,height;
    cin>>n>>m>>a;
    width=(n+a-1)/a;
    height=(m+a-1)/a;
    flot=width*height;
    cout<<flot<<endl;
    return 0;
}
