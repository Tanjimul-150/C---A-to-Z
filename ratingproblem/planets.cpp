#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int freq[101] = {0};
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            freq[a]++;
        }
        int total_cost = 0;
        for (int orbit = 1; orbit <= 100; orbit++)
        {
            if (freq[orbit] > 0)
            {
                total_cost += min(freq[orbit], c);
            }
        }
        cout << total_cost << endl;
    }
    return 0;
}