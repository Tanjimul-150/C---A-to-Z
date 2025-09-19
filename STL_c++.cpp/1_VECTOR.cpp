#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter element of size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element for push_back: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    // vec1.pop_back();
    // display(vec1);
    // vec1.pop_back();
    // display(vec1);

    // declaring a vector iterator;
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 3, 5, 566);
    display(vec1);
    cout << endl;
    // vector<int> vec1;      //zero length integer vector
    // vector<char> vec2(4);  //4-element character vector
    // vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6, 3);
    display(vec4);
    cout << vec4.size(); // 6-element vector of 3s
    return 0;
}