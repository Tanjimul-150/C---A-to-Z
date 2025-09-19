#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    //for writing a file
    string st1;
    st1 = "My name is Tanjimul";
    ofstream out("1.txt");
    out << st1;
    return 0;
}