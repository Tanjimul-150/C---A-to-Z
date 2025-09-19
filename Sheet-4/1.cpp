#include<iostream>
using namespace std;
int main(){
    string a,b;
    int len1,len2;
    getline(cin,a);
    getline(cin,b);
    len1=a.length();
    len2=b.length();
    cout<<len1 <<" "<<len2<<endl;
    cout<<a<<b<<endl;
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
}