#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        char maxChar = 'a';
        for (char c : s)
        {
            if (c > maxChar)
            {
                maxChar = c;
            }
        }
        int alphabetSize = maxChar - 'a' + 1;
        cout << alphabetSize << endl;
    }
    return 0;
}
