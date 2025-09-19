#include <iostream>
#include <string>
using namespace std;

bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int main()
{
    string s;
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for (char ch : s)
    {
        if (isLetter(ch))
        {
            if (!inWord)
            {
                count++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}
