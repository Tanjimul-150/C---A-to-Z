#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    string result = s;

    for (int i = 1; i < n; ++i)
    {
        string left = s.substr(0, i);
        string right = s.substr(i);
        sort(left.begin(), left.end());
        sort(right.begin(), right.end());
        string combined = left + right;
        if (combined < result)
        {
            result = combined;
        }
    }

    cout << result << endl;
    return 0;
}
