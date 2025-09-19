#include <iostream>
using namespace std;
int main()
{
    int A, B,i;
    cin >> A >> B;
    int foundLucky = 0;
    for(i = A; i <= B; i++)
        {
        int num = i;
        int isLucky = 1;
        while (num > 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = 0;
                break;
            }
            num /= 10;
        }
        if (isLucky)
        {
            if (foundLucky)
            {
                cout << " ";
            }
            cout << i;
            foundLucky = 1;
        }
    }
    if (!foundLucky)
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}

