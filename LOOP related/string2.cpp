#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int countL = 0, countR = 0, balancedCount = 0;
    string temp = "";
    for (char c : s) 
    {
        temp += c;
        if (c == 'L') countL++;
        else countR++;
        
        if (countL == countR) 
        {
            balancedCount++;
        }
    }
    cout << balancedCount << "\n";
    countL = countR = 0;
    temp = "";
    for (char c : s) 
    {
        temp += c;
        if (c == 'L') countL++;
        else countR++;
        
        if (countL == countR) 
        {
            cout << temp << "\n";
            temp = "";
        }
    }
    
    return 0;
}
