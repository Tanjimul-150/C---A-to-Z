#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    for (int i = 0; S[i] != '\0'; i++) 
    {
        if (S[i] == '\\') 
        {
            break;
        }
        cout<<S[i];
    }
    return 0;
}