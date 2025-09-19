#include<iostream>
using namespace std;
int main()
{
    int t,s,k,l,i;
    i=1;
    cin>>t;
    while(t--)
    {
        cin>>s>>l>>k;
        if (l <= 20 && s <= 20 && k <= 20) 
        {
            cout << "Case " << i << ": good" << endl;
        } 
        else 
        {
            cout << "Case " << i << ": bad" << endl;
        }
        i++;
    }
    return 0;
}