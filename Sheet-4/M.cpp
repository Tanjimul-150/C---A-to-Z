#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    string target = "hello";
    int targetIndex = 0;

    for (char c : S)
    {
        if (c == target[targetIndex])
        {
            targetIndex++;
            if (targetIndex == target.size())
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}