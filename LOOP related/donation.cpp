#include <iostream>
using namespace std;
int main() 
{
    int T, amount = 0;
    string command;
    int donation;
    cin >> T;
    while (T--) 
    {
        cin >> command;
        if (command == "donate") 
        {
            cin >> donation;
            amount += donation;
        } 
        else if (command == "report") 
        {
            cout << amount << endl;
        }
    }
    return 0;
}
