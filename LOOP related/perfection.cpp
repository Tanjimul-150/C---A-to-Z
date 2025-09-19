#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() 
{
    cout << "PERFECTION OUTPUT" << endl;
    int n;
    while (true) 
    {
        cin >> n;
        if (n == 0) 
        {
            break;
        }
        int sum = 1;
        if (n == 1) 
        {
            sum = 0;
        }
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                sum += i;
                if (i != n / i) 
                {
                    sum += (n / i);
                }
            }
        }
        cout << setw(5) << n << "  ";
        if (sum == n) 
        {
            cout << "PERFECT" << endl;
        }
        else if (sum < n) 
        {
            cout << "DEFICIENT" << endl;
        }
        else 
        {
            cout << "ABUNDANT" << endl;
        }
    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
