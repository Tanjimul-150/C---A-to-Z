#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int>vec1={10,20,30,40,50};
    vec1.erase(vec1.begin()+2);
    vec1.insert(vec1.begin()+1,15);
    vec1.erase(vec1.begin());
    for(int num:vec1){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}