#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k, p;
        cin >> n >> k >> p;
        // Calculate the minimum number of operations required
        int minOps = abs(k) / p + (abs(k) % p != 0);
        // Check if it is possible to achieve the sum k
        if (abs(k) > n * p) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            cout << minOps << endl;
        }
    }
    return 0;
}

