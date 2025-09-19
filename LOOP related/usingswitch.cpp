#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n, i, p;
    string str;
    cin >> n;
    while (n--) 
    {
        cin >> str;
        p = str.length();
        switch (p > 10) 
        {
            case 1: // when p > 10
                cout << str[0] << p - 2 << str[p - 1] << endl;
                break;
            case 0: // when p <= 10
                cout << str << endl;
                break;
        }
    }
    return 0;
}
