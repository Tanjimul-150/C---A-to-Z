#include <iostream>
#include <string>
using namespace std;
int countSubsequences(const string &s) 
{
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n - 2; ++i) 
    {
        if (s[i] == '-') 
        {
            for (int j = i + 1; j < n - 1; ++j) 
            {
                if (s[j] == '_') 
                {
                    for (int k = j + 1; k < n; ++k) 
                    {
                        if (s[k] == '-') 
                        {
                            ++count;
                        }
                    }
                }
            }
        }
    }  
    return count;
}
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << countSubsequences(s) << endl;
    }
    return 0;
}

