#include <iostream>
using namespace std;

int main()
{
    string s, j;
    cin >> s;
    int len;
    len = s.length();
    string reversed = "";
    for (int i = len - 1; i >= 0; i--)
    {
        reversed += s[i];
    }
    if (s == reversed)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}