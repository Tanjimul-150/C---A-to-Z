#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> foo(3, 100);
    vector<int> bar(5, 200);
    foo.swap(bar);
    cout << "foo contains: ";
    for (int i = 0; i < foo.size(); i++)
    {
        cout << foo[i] << " ";
    }
    cout << endl;
    cout << "Bar contains: ";
    for (int i = 0; i < bar.size(); i++)
    {
        cout << bar[i] << " ";
    }
    cout << endl;
    // int size,element;
    // cout<<"Enter the size of element: ";
    // cin>>element;
    return 0;
}