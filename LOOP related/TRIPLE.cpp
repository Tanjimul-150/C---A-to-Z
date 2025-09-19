#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
        {
        int n;
        cin >> n;
        unordered_map<int, int> freq;
        int result = -1;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            freq[num]++;
            if (freq[num] == 3)
            {
                result = num;
            }
        }
        cout << result << endl;
    }

    return 0;
}
