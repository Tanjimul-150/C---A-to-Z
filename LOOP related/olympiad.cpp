#include <iostream>
#include <vector>
#include <map>
using namespace std;
void solve() 
{
    long long t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> digits(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> digits[i];
        }
        map<int, int> required;
        required[0] = 3;
        required[1] = 1;
        required[2] = 2;
        required[3] = 1;
        required[5] = 1;
        map<int, int> counts;
        int result = 0;
        for (int i = 0; i < n; ++i) 
        {
            int d = digits[i];
            if (required.find(d) != required.end()) 
            {
                counts[d]++;
            }
            bool all_met = true;
            for (auto& pair : required) 
            {
                if (counts[pair.first] < pair.second) 
                {
                    all_met = false;
                    break;
                }
            }
            
            if (all_met) 
            {
                result = i + 1;
                break;
            }
        }
        
        cout << result << endl;
    }
}
int main() 
{
    solve();
    return 0;
}