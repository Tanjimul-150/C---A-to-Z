#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element;
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.insert(vec1.begin(), 15);
    display(vec1);
    return 0;
}