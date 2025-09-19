#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

long long baseToDecimal(const string &num, int base)
{
    long long result = 0;
    for (char c : num)
    {
        int digit = isdigit(c) ? c - '0' : c - 'A' + 10;
        result = result * base + digit;
    }
    return result;
}

string decimalToBase(long long num, int base)
{
    if (num == 0)
        return "0";
    string result = "";
    while (num > 0)
    {
        int digit = num % base;
        result += (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        num /= base;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string num;
    int fromBase, toBase;

    while (cin >> num >> fromBase >> toBase)
    {
        long long decimal = baseToDecimal(num, fromBase);
        string converted = decimalToBase(decimal, toBase);

        if (converted.length() > 7)
            cout << "  ERROR\n";
        else
            cout << string(7 - converted.length(), ' ') << converted << "\n";
    }

    return 0;
}