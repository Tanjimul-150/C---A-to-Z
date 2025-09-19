/*
#include<iostream>
using namespace std;
int main()
{
    long long N;
    cout<<"Enter the value of N: ";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cout<<i<<"\n";
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main()
{
    //selection control structurea if,else-if,else ladder;
    int age,b,c;
    cout<<"Tell me your age: ";
    cin>>age;
    if(age<18)
    {
        cout<<"You can't get accese for watching X-video";
    }
    else if(age==18)
    {
        cout<<"You need to maintain your privacy";
    }
    else
    {
        cout<<"You can publicly watch porn video";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Tell me your age: ";
    //selection control structure with switch case;
    cin>>age;
    switch (age)
    {
    case 20:
        cout<<"You are adult";
        break;
    case 25:
        cout<<"You need to marry with a qute girl";
        break;
    case 30:
        cout<<"In this age i think you should have more than 2 child";
        break;
    case 35:
        cout<<"In this age you need to lead a better life with your wife and family";
        break;
    case 40:
        cout<<"If you don't marry fuck you.You are a sugar daddy";
        break;

    default:
    cout<<"No case found"<<endl;
        break;
    }
    return 0;
}