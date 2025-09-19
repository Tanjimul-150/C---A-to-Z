#include<iostream>
using namespace std;
int main()
{
    int H1,M1,H2,M2,sh,eh;
    while(cin>>H1>>M1>>H2>>M2)
    {
        if(H1==0 && M1==0 && H2==0 && M2==0)
        {
            break;
        }
        sh=H1*60+M1;
        eh=H2*60+M2;
        if(eh<=sh)
        {
            eh=eh+(24*60);
        }
        cout<<eh-sh<<endl;
    }
    return 0;
}