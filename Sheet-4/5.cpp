#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int j, f = 0;
        cin >> s;
        j = s.length();
        for (int i = 0; i < j; i++)
        {
            if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0' || s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}