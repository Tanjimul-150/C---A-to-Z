#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool first = true;
    while (getline(cin, s))
    {
        if (!first)
            cout << endl;
        first = false;
        int freq[128] = {0};
        for (char c : s)
        {
            if (c >= 32 && c <= 127)
                freq[c]++;
        }
        vector<pair<int, int>> v;
        for (int i = 32; i <= 127; i++)
        {

            if (freq[i])
                v.push_back({freq[i], -i});
        }
        sort(v.begin(), v.end());
        for (auto p : v)
        {
            cout << -p.second << " " << p.first << endl;
        }
    }
    return 0;
}