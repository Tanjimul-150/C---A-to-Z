#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if (y % x != 0)
        {
            
            cout << "0 0\n";
            continue;
        }

        int q = y / x; 

        if (q == 1)
        {
            
            cout << "1 1\n";
            continue;
        }

        bool found = false;
       
        for (int b = 2; b <= q; b++)
        {
            int temp = q;
            int a = 0;
           
            while (temp % b == 0)
            {
                temp /= b;
                a++;
            }
        
            if (temp == 1 && a > 0)
            {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found)
        {
            
            cout << "0 0\n";
        }
    }

    return 0;
}