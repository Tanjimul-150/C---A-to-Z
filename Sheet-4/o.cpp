#include <iostream>
#include <vector>
#include <string>

using namespace std;

void countingSort(string &s)
{
    vector<int> count(26, 0);
    for (char c : s)
    {
        count[c - 'a']++;
    }
    int index = 0;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < count[i]; ++j)
        {
            s[index++] = 'a' + i;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    string S;
    cin >> S;

    countingSort(S);

    cout << S << endl;

    return 0;
}