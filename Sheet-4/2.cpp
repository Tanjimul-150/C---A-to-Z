#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int sum = 0;

    for (char ch : S)
    {
        sum += ch - '0';
    }

    cout << sum << endl;
    return 0;
}
