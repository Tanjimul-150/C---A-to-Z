#include<iostream>
using namespace std;

int main()
{
    int mark[100],n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>mark[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"value of "<<i<<" is "<< mark[ i]<<endl;
    }
    return 0;
}