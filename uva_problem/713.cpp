#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseAndTrim(string s)
{
    reverse(s.begin(), s.end());

    int i = 0;
    while (i < s.length() && s[i] == '0')
        i++;
    return (i == s.length()) ? "0" : s.substr(i);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        a = reverseAndTrim(a);
        b = reverseAndTrim(b);

        int sum = stoi(a) + stoi(b);
        string sumStr = to_string(sum);
        reverse(sumStr.begin(), sumStr.end());

        int i = 0;
        while (i < sumStr.length() && sumStr[i] == '0')
            i++;
        cout << ((i == sumStr.length()) ? "0" : sumStr.substr(i)) << endl;
    }
    return 0;
}
