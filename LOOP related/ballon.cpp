#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ballon=0;
        bool solved[26]={false};
        for(char c : s)
        {
            int index=c-'A';
            if(!solved[index])
            {
                ballon+=2;
                solved[index]={true};
            }
            else
            {
                ballon+=1;
            }
        }
        cout<<ballon<<endl;
    }
    return 0;
}