#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int freq[256] = {0};

    for (char c : S)
    {
        freq[toupper(c)]++;
    }

    int count = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
    cout << count << endl;

    return 0;
}
